#include <iostream>
using namespace std;
int main(){

    int rows,columns;
    
    cout<<"Enter no of rows : \n";
    cin >> rows;
    cout<<"Enter no of columns : \n";
    cin >> columns;

    int n = 1;

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout << n <<" ";
            n ++;
        }

        cout << endl;
    }
    return 0;
}

// sample output

// Enter no of rows : 
// 5
// Enter no of columns :
// 4

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// 17 18 19 20


