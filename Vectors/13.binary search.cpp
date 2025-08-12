#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> nums, int target){
    int n = nums.size();
    int st=0, end=n-1;

    while(st <= end){
        int mid = (st + end) / 2;

        if(nums[mid] < target){
            st = mid + 1;
        }

        else if(nums[mid] > target){
            end = mid-1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main(){

    vector <int> nums = {-1,0,3,4,5,9,12};
    int target = 5;

    cout << target <<" found at index "<<binarySearch(nums,target)<<endl;

    return 0;

}

// output

// 5 found at index 4

 