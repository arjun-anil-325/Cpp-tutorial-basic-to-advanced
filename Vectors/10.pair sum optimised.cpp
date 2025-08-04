#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector <int> pairSum(vector <int> nums, int target){
    vector <int> ans;
    int i=0, j=nums.size()-1;

    while(i < j){
        int pairSum = nums[i] + nums[j];

        if(pairSum > target){
            j--;
        }

        else if(pairSum < target){
            i++;
        }

        else{
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
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

    int target;
    cout << "Enter the target : \n";
    cin >> target;

    vector <int> res = pairSum(nums, target);

    cout << "Pair sum : \n";
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;

}