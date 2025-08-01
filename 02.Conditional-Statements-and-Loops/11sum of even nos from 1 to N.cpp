#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the no upto which sum is calculated: ";
    cin >> n;

    int evenSum = 0;

    for(int i=1; i<=n; i++){
        if(i % 2 == 0){
            cout << i << "\n";
            evenSum += i;
        }
    }

    cout << "Sum of even nos from 1 to " << n << " : " << evenSum << endl;

    return 0;
}