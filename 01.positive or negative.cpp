#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if(n > 0){                   // checks if the given no is greater than zero
        cout<<n<<" is positive";
    }
    else if(n < 0){              // checks if the given no is lesser than zero
        cout<<n<<" is negative";
    }
    else{
        cout<<"Number is zero";
    }
    return 0;
}