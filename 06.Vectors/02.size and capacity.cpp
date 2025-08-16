#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector <int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);

    cout <<"Size of nums : "<<nums.size() << endl;               // size will be 3.
    cout <<"Capacity of nums : "<<nums.capacity() << endl;       // capacity will be 4.

    nums.push_back(3);                     
    nums.push_back(4);                                           // two more elements added but now size exceeds and internal array will become double.

    cout <<"Size of nums : "<<nums.size() << endl;               // size will be 5.
    cout <<"Capacity of nums : "<<nums.capacity() << endl;       // capacity will be 8.

    
    return 0;

}

// output

// Size of nums : 3
// Capacity of nums : 4

// Size of nums : 5
// Capacity of nums : 8