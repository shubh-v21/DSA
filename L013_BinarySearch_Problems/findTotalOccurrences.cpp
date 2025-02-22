#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key) {
    int start = 0, end = size - 1, first = -1;
    while (start <= end) {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key) {
            first = mid;
            end = mid - 1; // Move left to find earlier occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(int arr[], int size, int key) {
    int start = 0, end = size - 1, last = -1;
    while (start <= end) {
        int mid = start + ((end - start) / 2);
        if (arr[mid] == key) {
            last = mid;
            start = mid + 1; // Move right to find later occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return last;
}

int countOcc(int arr[], int size, int key) {
    int first = firstOccurrence(arr, size, key);
    if (first == -1) return 0; // Element not found

    int last = lastOccurrence(arr, size, key);
    return last - first + 1;
}

int main() {
    int arr[] = {1, 3, 3, 5, 5, 5, 5, 5, 5, 8, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = countOcc(arr, size, 5);
    cout << count << endl;

    return 0;
}
