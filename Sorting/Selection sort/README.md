# 📝 Selection Sort

## 📌 Problem Statement  
Given an array of integers, sort the array in **ascending order** using the **Selection Sort algorithm**.

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
1. Start from the first element, assume it is the smallest.  
2. Compare it with all other elements to the right.  
3. Swap with the actual smallest element found.  
4. Repeat for each position until the array is sorted.  

---

## 🎨 ASCII Visualization  

Example:  

arr = [64, 25, 12, 22, 11]

Pass 1: [11, 25, 12, 22, 64]
Pass 2: [11, 12, 25, 22, 64]
Pass 3: [11, 12, 22, 25, 64]
Pass 4: [11, 12, 22, 25, 64]


Process visualization:  

[64, 25, 12, 22, 11]
^-----------------> Find smallest → 11 → swap

[11, 25, 12, 22, 64]
^-------------> Find smallest → 12 → swap

[11, 12, 25, 22, 64]
^---------> Find smallest → 22 → swap

[11, 12, 22, 25, 64]
^-----> Already sorted


✅ Final Array → `[11, 12, 22, 25, 64]`

---

## 📊 Example  

### Input

5
64 25 12 22 11


### Output

11 12 22 25 64


---

## 💻 Code (C++)

```cpp
// Selection Sort in C++
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr){
    int n = arr.size();

    for(int i=0; i<n-1; i++){
        int smallIndex = i;

        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallIndex]){
                smallIndex = j;
            }
        }
        swap(arr[i], arr[smallIndex]);
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

    selectionSort(arr);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
