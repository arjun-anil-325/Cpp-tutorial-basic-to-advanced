#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){

    int size1, size2;
    cout << "Enter the size of first array : \n";
    cin >> size1;

    vector <int> nums1(size1);                          

    cout << "Enter first array elements : \n";              
    for(int i=0; i<size1; i++){
        cin >> nums1[i];
    }

    cout << "Enter the size of second array : \n";
    cin >> size2;

    vector <int> nums2(size2);                          

    cout << "Enter second array elements : \n";              
    for(int i=0; i<size2; i++){
        cin >> nums2[i];
    }

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(nums1[i] == nums2[j]){
                cout <<nums1[i] << " ";
                break;
            }
        }
    }

    return 0;
} 