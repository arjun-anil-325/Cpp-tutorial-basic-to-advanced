#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int majorityElement(vector <int> &nums){
    unordered_map <int, int> freq;          // Initialised a hash table which contains key and value pair.
    
    int n = nums.size();                    // Here key is the number and value is how many times it occurs.

    for(int i=0; i<n; i++){                // Count frequency of each number
        freq[nums[i]] ++;                  // increment count of nums[i]
    }

    for(auto it : freq){                  // Check which element is majority and we iterate through the freq table.
        if(it.second > n/2){              // it.first is the number and it.second is the frequency of the number
            return it.first;              // if freq > n/2, return the key associated with it.
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

    int majEle = majorityElement(nums);

    if(majEle != -1){
        cout << "Majority element in the array : "<<majEle << endl;
    }
    else{
        cout <<"Majority element not found." << endl;
    }

    return 0;

}
