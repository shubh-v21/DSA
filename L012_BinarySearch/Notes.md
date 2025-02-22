# Binary Search Notes

## Introduction
Binary Search is an efficient searching algorithm used to find an element in a sorted array. It works by repeatedly dividing the search interval in half until the target element is found or the interval is empty.

## Algorithm
1. Set two pointers: `low` at the start and `high` at the end of the array.
2. Calculate the middle index: `mid = low + (high - low) / 2`.
3. Compare the middle element with the target:
   - If `arr[mid] == target`, return `mid` (element found).
   - If `arr[mid] < target`, move `low` to `mid + 1`.
   - If `arr[mid] > target`, move `high` to `mid - 1`.
4. Repeat steps 2-3 until `low` exceeds `high`.
5. If the loop exits without finding the element, return -1 (element not found).

## Time Complexity
- **Best Case:** O(1) (if the element is found at the middle index initially).
- **Average & Worst Case:** O(log n) (as the search space is divided by 2 in each step).

## Space Complexity
- O(1) for iterative implementation.
- O(log n) for recursive implementation (due to recursion stack).

## Code Implementation
### Iterative Approach (C++)
```cpp
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
```

### Recursive Approach (C++)
```cpp
#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}
```

## Applications
- Searching in sorted arrays
- Finding the lower and upper bounds in sorted data
- Solving computational problems like finding square roots and searching in rotated sorted arrays
- Used in various data structures like Binary Search Trees (BSTs) and segment trees

## Variants of Binary Search
- **Lower Bound**: Finds the first position where the target could be inserted without breaking order.
- **Upper Bound**: Finds the first position after the target.
- **Binary Search on Answer**: Used in problems like "minimum days to complete tasks", "maximum capacity", etc.

## Conclusion
Binary Search is a fundamental algorithm in computer science and is widely used in problem-solving. Mastering it helps in tackling complex problems efficiently.

---

*Happy Coding!* 🚀

