#include <iostream>
#include <vector>
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

    cout << "Subarray elements : \n";

    for(int start = 0; start < size; start++){
        for(int end = start; end<size; end++){
            for(int i=start; i<=end; i++){
                cout << nums[i];
            }
            cout << " ";
        }
        cout<<endl;
    }
    return 0;

}

// output

// Enter size of array : 
// 5
// Enter array elements :
// 1
// 2
// 3
// 4
// 5

// Subarray elements :
// 1 12 123 1234 12345
// 2 23 234 2345
// 3 34 345
// 4 45
// 5
