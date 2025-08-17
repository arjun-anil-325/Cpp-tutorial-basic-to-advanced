#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int smallIndex = i;

        // find index of smallest element in unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallIndex]) {
                smallIndex = j;
            }
        }
        // swap with first element of unsorted part
        swap(arr[i], arr[smallIndex]);
    }
}

int main() {
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;

    vector<int> arr(size);

    cout << "Enter array elements : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);

    cout << "Sorted array : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

// sample output

// Enter the size of array : 
// 5
// Enter array elements : 
// 4
// 1
// 3
// 5
// 2

// Sorted array :
// 1
// 2
// 3
// 4
// 5
