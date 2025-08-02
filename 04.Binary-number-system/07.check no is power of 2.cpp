#include <iostream>
using namespace std;

bool isPowerOfTwo(int n){
    if(n>0 && (n & (n-1)) == 0){                // n & (n - 1) clears the lowest set bit of n, so if n is a power of 2, this operation gives 0.
        return true;
    }
    return false;
}
int main(){
    int num;
    cout << "Enter the number : \n";
    cin >> num;
    
    if(isPowerOfTwo(num) == true){
        cout << num <<" is power of 2. \n";
    }
    else{
        cout << num <<" is not power of 2. \n";
    }

    return 0;

}

// sample output

// Enter the number : 
// 16

// 16 is power of 2.