#include <iostream>
#include <vector>
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

    double sum = 0;

    for(int i=0; i<size; i++){
        sum += nums[i];                                    // add each array element to the variable sum.
    }

    double avg = sum / size;                               // divide sum with size of array to get the average variable.

    cout << "Sum of array elements : \n"<<sum<<endl;
    cout << "Average of array elements : \n"<<avg<<endl;

    return 0;
    
}

// sample output

// Enter the size of array : 
// 6
// Enter array elements :
// 8
// 9
// -5
// 2
// 0
// -3

// Sum of array elements :
// 11
// Average of array elements :
// 1.83333