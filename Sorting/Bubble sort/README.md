# 📝 Bubble Sort

## 📌 Problem Statement  
Given an array of integers, sort the array in **ascending order** using the **Bubble Sort algorithm**.

---

## 📥 Input / 📤 Output  

### Input  
- First line: Integer `N` → size of the array  
- Second line: `N` space-separated integers  

### Output  
- Sorted array in ascending order  

---

## 🔒 Constraints  
- `1 ≤ N ≤ 10^5`  
- `-10^9 ≤ arr[i] ≤ 10^9`  

---

## 🚀 Approach  
1. Traverse the array multiple times.  
2. In each pass, compare adjacent elements.  
3. If the current element is greater than the next, **swap them**.  
4. After each pass, the largest element moves ("bubbles") to the end.  
5. Repeat until the array is sorted.  

---

## 🎨 ASCII Visualization  

Example:  

arr = [5, 1, 4, 2, 8]

- Pass 1: [1, 4, 2, 5, 8]
- Pass 2: [1, 2, 4, 5, 8]
- Pass 3: [1, 2, 4, 5, 8]
- Pass 4: [1, 2, 4, 5, 8]


Process visualization:  

 [5, 1, 4, 2, 8]
- ^--swap--> [1, 5, 4, 2, 8]
- ^--swap--> [1, 4, 5, 2, 8]
- ^--swap--> [1, 4, 2, 5, 8]

 [1, 4, 2, 5, 8]
- ^--swap--> [1, 2, 4, 5, 8]


✅ Final Array → `[1, 2, 4, 5, 8]`

---

## 📊 Example  

### Input

5
5 1 4 2 8


### Output

1 2 4 5 8


---

## 💻 Code (C++)

```cpp
// Bubble Sort in C++
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no swap occurred, array is already sorted
        if (!swapped) break;
    }
}

int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    vector<int> arr(size);
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
