#include <iostream>
using namespace std;
int main(){

    int rows;
    cout << "Enter no of rows : \n";
    cin >> rows;

    for(int i=0; i<rows; i++){
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}

// sample output

// Enter no of rows : 
// 5


// *
// * *
// * * *
// * * * *
// * * * * *