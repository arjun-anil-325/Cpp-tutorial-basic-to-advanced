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
    for(int start = 0; start < size; start++){
        int currentSum = 0;
        for(int end = start; end<size; end++){
            currentSum += nums[end];
            maxSum = max(maxSum, currentSum);
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