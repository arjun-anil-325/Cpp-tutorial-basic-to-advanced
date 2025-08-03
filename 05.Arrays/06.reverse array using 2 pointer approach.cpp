#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of array : \n";
    cin >> size;

    vector <int> nums(size);                          

    cout << "Enter array elements : \n";              
    for(int i=0; i<size; i++){
        cin >> nums[i] ;
    }

    // cout << "Reverse array elements : \n";

    // for(int i=size-1; i>=0; i--){                 // printing loop backwards.
    //     cout << nums[i] << " ";
    // }

    int start = 0, end = size-1;                     // two pointer approach where we initialise two pointers : start and end. start=0 and end = size-1

    while(start < end){                              // check only whenever start < end, if start > end no need to swap.
        swap(nums[start],nums[end]);                 // swap the numbers
        start ++;                                    // increment start and decrement end.
        end --;
    }

    cout << "Reverse array elements : \n";           // print reverse array elements.
    for(int i=0; i<size; i++){
        cout << nums[i] << " ";
    }

    return 0;
}

// sample output

// Enter the size of array : 
// 7
// Enter array elements :
// 4
// 2
// 7
// 8
// 1
// 2
// 5

// Reverse array elements :
// 5 2 1 8 7 2 4
