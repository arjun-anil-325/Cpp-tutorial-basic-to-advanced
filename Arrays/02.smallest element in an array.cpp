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

    int min = INT_MAX;                                // initialising min variable with max int value.
    int minIndex = -1;                                // // store the index of min value                               
    for(int i=0; i<size; i++){
        if(nums[i] < min){                            // whenever array element lesser than min , update min variable with the array element.
            min = nums[i];                            // also we can use min = min(num[i], min)
            minIndex = i;                             // update the index at which min value occurs.
        }
    }

    cout << "Smallest array element : "<<min<<endl;
    cout << "Smallest array element index : "<<minIndex<<endl;
    

    return 0;
    
}

// sample output

// Enter the size of array : 
// 6
// Enter array elements : 
// 7
// -9
// 4
// 0
// 2
// -5


// Smallest array element : -9
// Smallest array element index : 1



 