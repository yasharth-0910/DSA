#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void qs(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && arr[i] <= pivot) i++;
        while (i <= j && arr[j] > pivot) j--;

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    qs(arr, low, j - 1);
    qs(arr, j + 1, high);
}

vector<int> quicksort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    // Test the quicksort function
    vector<int> arr = {5, 2, 9, 1, 7};
    vector<int> sortedArr = quicksort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
