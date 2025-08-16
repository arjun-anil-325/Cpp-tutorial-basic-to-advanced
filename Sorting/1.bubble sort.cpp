#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort function
void bubbleSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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

    bubbleSort(arr);

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
