#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of array : \n";
    cin >> size;

    vector <int> nums(size);                          

    cout << "Enter array elements : \n";              
    for(int i=0; i<size; i++){
        cin >> nums[i];
    }
    
    int target;
    cout<< "Enter the number you want to find : \n";
    cin >> target;

    int targetIndex = -1;

    for(int i=0; i<size; i++){
        if(target == nums[i]){
            targetIndex = i;
            break;
        }
    }

    if(targetIndex != -1){
        cout << target <<" found at index "<<targetIndex<<endl;
    }
    else{
        cout << target <<" is not found \n";
    }

    return 0;
}

// sample output

// Enter the size of array : 
// 7
// Enter array elements :
// 4
// 2
// 7
// 8
// 1
// 2
// 5


// Enter the number you want to find :
// 8


// 8 found at index 3
     