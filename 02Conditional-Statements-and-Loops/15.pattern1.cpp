#include <iostream>
using namespace std;
int main(){

    int rows,columns;
    
    cout<<"Enter no of rows : \n";
    cin >> rows;
    cout<<"Enter no of columns : \n";
    cin >> columns;

    for(int i=1 ; i<= rows ; i++){       // outer loop decides how many lines or basically how many rows.
        for(int j=1; j<=columns; j++){   // inner loop decides what to print in one line or basically how many columns.
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}

// sample output

// Enter number of rows: 3
// Enter number of columns: 5


// * * * * * 
// * * * * * 
// * * * * * 
