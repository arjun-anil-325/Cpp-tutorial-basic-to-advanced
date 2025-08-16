#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int majorityElement(vector <int> &nums){
    int freq = 0, ans = 0;
    int n = nums.size();

    for(int i=0; i<n ;i++){          

        if(freq == 0){                    // Once freq becomes zero, we assume the current element could be the majority.
            ans = nums[i];
        }

        if(ans == nums[i]){               // If the same element keeps coming, we increase freq.
            freq ++;
        }
        else{                             // If a different element comes, we decrease freq.
            freq --;                      // At the end, if a majority element exists, it will remain.
        }
    }

    int count = 0;

    for(int val : nums){                  // This is a confirmation step, because Boyer-Moore just gives a candidate. 
                                          // Still need to verify if it really appears more than n/2 times.
        if(val == ans){
            count ++;
        }
    }

    if(count > n/2){
        return ans;
    }
    else{
        return -1;
    }

}

int main(){

    int size;
    cout << "Enter size of array : \n";
    cin >> size;

    vector <int> nums(size);

    cout << "Enter array elements : \n";

    for(int i=0; i<size; i++){
        cin >> nums[i];
    }

    int majEle = majorityElement(nums);

    if(majEle != -1){
        cout << "Majority element in the array : "<<majEle << endl;
    }
    else{
        cout <<"Majority element not found." << endl;
    }

    return 0;

}

// sample output

// Enter size of array : 
// 5
// Enter array elements :
// 1
// 2
// 2
// 1
// 1

// Majority element in the array : 1