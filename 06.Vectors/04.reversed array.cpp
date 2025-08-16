#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector <int> &nums){
    int start = 0, end = nums.size() - 1;

    while(start < end){
        swap(nums[start],nums[end]);
        start ++;
        end--;
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

    reverseArray(nums);
    
    cout <<"Reversed array : \n";
    for(int i=0; i<size; i++){
        cout << nums[i] << endl;
    }

    return 0;

}