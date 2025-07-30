#include <iostream>
using namespace std;

int factOfN(int n){

    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }

    return fact;
}
int main(){

    int n;
    cout << "Enter the number upto which factorial is calculated : \n";
    cin >> n;

    int fact = factOfN(n);                                              
    cout<<"Factorial of "<<n<<" : "<<fact<<endl;

    return 0;

}