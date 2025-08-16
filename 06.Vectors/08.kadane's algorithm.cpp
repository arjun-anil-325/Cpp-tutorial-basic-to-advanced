#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    int size;
    cout << "Enter size of array : \n";
    cin >> size;

    vector <int> nums(size);

    cout << "Enter array elements : \n";

    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    int maxSum = INT_MIN;
    int currentSum = 0;                        // Initialised current subarray sum to 0.

    for(int i=0; i<size; i++){
        currentSum += nums[i];                 // Add each element to currentSum
        maxSum = max(maxSum, currentSum);      // update maximum sum by taking maximum of current value and max value.
        if(currentSum < 0){                    // Whenever current sum becomes less than zero, reset the current sum to 0.
            currentSum = 0;
        }
    }

    cout << "Maximum subarray sum : "<<maxSum<< endl;
    return 0;

}

// sample output

// Enter size of array : 
// 7
// Enter array elements : 
// 3
// -4
// 5
// 4
// -1
// 7
// -8

// Maximum subarray sum : 15 