#include <iostream>
using namespace std;
int main(){

    int rows,columns;
    
    cout<<"Enter no of rows : \n";
    cin >> rows;
    cout<<"Enter no of columns : \n";
    cin >> columns;

    for(int i=1; i<=rows; i++){         // outer loop will print no of lines or no of rows.
        for(int j=1; j<= columns;j++){  // inner loop will print what to print in one line or no of columns.
            cout << j <<" ";
        }

        cout << endl;
    }

    return 0;
}

// sample output

// Enter no of rows :
// 4
// Enter no of columns :
// 5

// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
