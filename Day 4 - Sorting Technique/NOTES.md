# Notes for quick revision of all sorting methods :-

**Read these for rewinding:**

1. #### Bubble Sort:

In this, run 2 loops. The inner loop:

* `for (int i = 0; i < arr.size(); i++)` scans through the array.

* The inner loop: `for (int j = 0; j < arr.size() - i - 1; j++)` ignores the sorted part at last.

``` C++
if (arr[j] > arr[j +1]) {
    swap (arr[j], arr[j + 1]);
    }
```
##### So basically, the largest elements gets pushed to the last part, and sorting is done all the passes.


2. #### Selection Sort: 

In this one, we track the index of the smallest number we find in the array.
So we use this variable:

`int minIndex = i` (Stores index of the smallest element we found, yet).

Again two loops:

`for (int i = 0; i < arr.size(); i++)` For scanning through the array.

`for (int j = i + 1; j < arr.size(); j++)` Looks for the smallest element using:
``` C++
if (arr[j] < arr[minIndex]) {
    minIndex = j; // If smaller element found, update minIndex to stores its index;
}
```

As we have found the smaller element, `swap(arr[i], arr[minIndex])` **in outer loop only**.


3. Insertion Sort: 

In this one, we basically store the current element of array which we are looping through:

``` C++
for (int i = 1; i < arr.size(); i++) {
    int temp = arr[i]; // Temporarily stores the current element.
    int j = i - 1; // This is for looking at the element one before the i loop is checking afterwards.
}
```
Then, we initialize a while loop, for sorting:

``` C++
while (j >= 0 && arr[j] > temp) { // This ensures that j is never below 0  and checks if the element before is larger or not
    arr[j + 1] = arr[j]; // If the previous element is larger, then make the next element same
    j--; // Reduce j to compare with previous elements.
}   // For example: [2, 5, 3] as 5 > 3, it will make the array: [2, 5, 5]
```

Now, j gets -1 (i mean it gets reduced by 1 due to j--). \
So now j is 0 (5 was at index 1). \
From the condition of while loop, is 2 > 3 `(arr[j] > temp)`? \
NO! the loop stops. \
And now, `arr[j + 1] = temp` \
So, 0 + 1 = 1. So, 5 = 3. So the array becomes: \
`[2, 3, 5]` \
Hence, Sorted.



## Sorting Algorithms With Recursion:

1. #### Recursive Bubble Sort:

In this, we need 2 parameters: `vector<int>& arr, int n` where n is the size of the array.

The base case: `if (n == 1) return` which confirms the array is sorted.

We swap by doing:
 
``` C++
for (int i = 0; i < arr.size() - 1; i++) {
    if (arr[i] < arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
    }
}
```

This is one iteration. So for an array of size 5, this is gonna run once, and we do recursion by:
`recursive_bubble_sort(arr, n - 1)`

And when the base case hits, the recursion will stop and array will be sorted.

2. #### Recursive Insertion Sort

In this too, we need two parameters, `vector<int>& arr, int n` where n is the size of the array.

Base Case: `if (n == 1) return`

Example Array: `[5, 3, 8]`, `n = arr.size()` (3).

**1st Call:**  `recursive_insertion_sort(arr, 3)` \
                What is recursive_insertion_sort(arr, 3)? (arr, 3 - 1) \
**2nd Call:** `recursive_insertion_sort(arr, 2)` \
                What is recursive_insertion_sort(arr, 2) (arr, 2 - 1)? \
**3rd Call:** `recursive_insertion_sort(arr, 1)` \
                Base case hits: `if (n == 1) return` so it returns. \

Now the _unwinding_ process starts:

Back to the _second_ call:
`recursive_insertion_sort(arr, 2)

``` C++
void recursive_insertion_sort(vector<int>& arr, int n) { // n == 2
    int temp = arr[n - 1]; // which is arr[1] == 3
    int j = n - 2; // which is 2 - 2 -> 0

    while (j >= 0 && arr[j] > temp) {  // is j >= 0? YES! is arr[j] (arr[0] == 5) > temp (3)? YES! Condition Passed!
        arr[j + 1] = arr[j]; // arr[1] = arr[0] ---> New array: [5, 5, 8].
        j--; // Decrement to compare with previous elements. Now, j == -1;
    }
    arr[j + 1] = temp; // j was -1. So, arr[0] = temp. (temp was 3) arr[0] = 3. New Array ----> [3. 5, 8] Sorted!  
}
```

Now, back to the _first_ call:
`recursive_insertion_sort(arr, 3)`

``` C++
void recursive_insertion_sort(vector<int>& arr, int n) { // n == 3
    int temp = arr[n - 1]; // Which is arr[3 - 1] -> arr[2] == 8.
    int j = n - 2; // Equals to 3 - 2 == 1. So j == 1.

    while (j >= 0 && arr[j] > temp) { // Is j greater or equal to 0? YES! Is arr[j] (arr[1] == 3) > temp (temp was 8). NO! Condition Failed!
        arr[j + 1] = arr[j];
        j--; 
    }
    arr[j + 1] = temp; // Still the insertion is left. j was 1. arr[j + 1] == arr[2] which is 8. so it is 8 = 8. So nothing changes.
}
```

#### Hence, Sorted!
   