#include <iostream>
#include <vector>
using namespace std;

int uniqueElement(vector <int> &nums){
    int ans = 0;
    for(int value : nums){
        ans ^= value;
    }

    return ans;
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

    cout << "Unique element in the array : " << uniqueElement(nums) << endl;

    return 0;

}

// sample output

// Enter size of array : 
// 5
// Enter array elements : 
// 5
// 1
// 2
// 1 
// 2

// Unique element in the array : 5
