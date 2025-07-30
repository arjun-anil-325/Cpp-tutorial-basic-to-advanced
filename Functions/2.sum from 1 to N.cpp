#include <iostream>
using namespace std;

int sumofNno(int n){                                                    // function definition
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }

    return sum;
}
int main(){

    int n;
    cout << "Enter the number upto which sum is calculated : \n";
    cin >> n;

    int sum = sumofNno(n);                                              // function call
    cout<<"Sum of nos from 1 to "<<n<<" : "<<sum<<endl;

    return 0;

}