#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector <int> &nums,int target){
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
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

    int target;
    cout << "Enter the target to find : \n";
    cin >> target;

    cout << target <<" is found at index "<<linearSearch(nums,target)<< endl;

    return 0;

}

