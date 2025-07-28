#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the number upto which print : ";
    cin >> n;

    int i = 1;

    while(i <= n){         // while loop will run till i exceed the given no n and for any i<=n it will print he statements inside the loop.
        cout << i <<"\n";
        i++;               // increment i by 1.
    }
    
    return 0;
}