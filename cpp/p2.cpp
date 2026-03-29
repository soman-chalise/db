#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low >= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid + 1;
        } else if (arr[mid] > target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cin >> target;
    cout << "Element found at index: " << binarySearch(numbers, n, target) << endl;
    return 0;
}