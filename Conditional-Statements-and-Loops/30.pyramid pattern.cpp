#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter no of rows : \n";
    cin >> rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-i-1; j++){
            cout << " ";
        }

        for(int j=1; j<=i+1; j++){
            cout << j;
        }

        for(int j=i; j>0; j--){
            cout << j;
        }

        cout << endl;
    }
    
    return 0;
}


