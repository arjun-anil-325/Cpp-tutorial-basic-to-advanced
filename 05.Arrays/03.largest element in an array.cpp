#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){

    int size;
    cout << "Enter the size of array : \n";
    cin >> size;

    vector <int> nums(size);                          // vector is used for dynamic size array

    cout << "Enter array elements : \n";              // taking array elements from the user
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    int max = INT_MIN;                                // initialising max variable with min int value.
    int maxIndex = -1;                                // store the index of max value                               
    for(int i=0; i<size; i++){
        if(nums[i] > max){                            // whenever array element greater than max , update max variable with the array element.
            max = nums[i];                            // also we can use max = max(num[i],max)
            maxIndex = i;                             // update the index at which max value occurs.
        }
    }

    cout << "Largest array element : "<<max<<endl;
    cout << "Largest array element index : "<<maxIndex<<endl;
    

    return 0;
    
}

// sample output

// Enter the size of array : 
// 6
// Enter array elements : 
// -1
// 5
// 2
// 8
// -6
// 3

// Largest array element : 8
// Largest array element index : 3
