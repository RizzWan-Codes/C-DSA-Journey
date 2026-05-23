#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int MaximizeStockProfit (vector<int>& price) {
    
    int minimumElem = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < price.size(); i++) {
        if (price[i] < minimumElem) {
            minimumElem = price[i];
        }

        int profit = price[i] - minimumElem;


        maxProfit = max(profit, maxProfit);
    }

    return maxProfit;
}

int main () {
    vector<int> price = {7, 1, 5, 3, 6, 4};

    int maxProfit = MaximizeStockProfit(price);

    cout << maxProfit;

    return 0;
}