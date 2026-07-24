const { chromium } = require("playwright");
const fs = require("fs");

(async () => {
  const browser = await chromium.launch({
    headless: false
  });

  const page = await browser.newPage({
    viewport: {
      width: 1366,
      height: 768
    }
  });

  await page.goto(
    "https://presenti.ai/app/editor/K6JZcJGmCK144d3FoGBZOQ",
    { waitUntil: "networkidle" }
  );

  console.log("You have 30 seconds to log in...");
  await page.waitForTimeout(30000);

  if (!fs.existsSync("slides")) {
    fs.mkdirSync("slides");
  }

  const slideList = page.locator(".ppt-scale-list--preview-item");

  const count = await slideList.count();

  console.log(`Found ${count} slides`);

  for (let i = 0; i < count; i++) {

    await slideList.nth(i).click();

    await page.waitForTimeout(1000);

    await page.screenshot({
      path: `slides/slide-${i + 1}.png`
    });

    console.log(`Captured slide ${i + 1}`);
  }

  console.log("Done!");
})();