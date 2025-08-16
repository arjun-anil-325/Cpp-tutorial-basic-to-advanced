#include <iostream>
#include <vector>
using namespace std;

int rotatedArray(vector <int> &nums, int target){
    int n = nums.size();
    int st = 0, end = n-1;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(nums[mid] == target){
            return mid;
        }

        if(nums[st] <= nums[mid]){                                // left half
            if(nums[st] <= target && target < nums[mid]){
                end = mid-1;                                      // left binary search 
            }
            else{
                st = mid+1;
            }

        }

        else{
            if(nums[mid] < target && target <= nums[end]){       // right half
                st = mid+1;                                       // right binary check
            }
            else{
                end = mid-1;
            }
        }
    }

    return -1;
}
int main(){

    vector <int> nums = {3,4,5,6,0,1,2};
    int target = 0;

    cout << target <<" found at index "<<rotatedArray(nums,target)<< endl;

    return 0;
}

//output

// 0 found at index 4
