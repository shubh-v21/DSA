#include <iostream>
#include <vector>
#include <utility>

std::pair<int, int> firstAndLastPosition(std::vector<int> &arr, int n, int k) {
    int firstPos = -1, lastPos = -1;

    // Finding the first occurrence using binary search
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == k) {
            firstPos = mid;
            end = mid - 1; // Move left to find earlier occurrences
        } else if (arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Finding the last occurrence using binary search
    start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == k) {
            lastPos = mid;
            start = mid + 1; // Move right to find later occurrences
        } else if (arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return {firstPos, lastPos};
}

int main() {
    std::vector<int> arr = {0, 2, 2, 2, 2, 2, 2, 2, 3, 3};
    int n = arr.size();
    int k = 2;

    std::pair<int, int> result = firstAndLastPosition(arr, n, k);
    std::cout << "First position: " << result.first << ", Last position: " << result.second << std::endl;

    return 0;
}
