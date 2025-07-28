#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the number upto which print : ";
    cin >> n;

    for(int i=1; i<=n; i++){  //initialisation -- condition -- update // every time first check condition and then update till i<=n.
        cout << i <<"\n";
    }

    return 0;
}