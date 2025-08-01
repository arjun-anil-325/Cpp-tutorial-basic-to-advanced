#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if (n % 2 == 0){             // if number leaves remainder 0, then no is even  
        cout<<n<<" is even \n";
    }

    else{
        cout<<n<<" is odd \n";   // else odd
        return 0;
    }
}