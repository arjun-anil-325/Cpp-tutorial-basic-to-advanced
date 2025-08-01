#include <iostream>
using namespace std;
int main(){

    int rows,columns;
    
    cout<<"Enter no of rows : \n";
    cin >> rows;
    cout<<"Enter no of columns : \n";
    cin >> columns;

    char ch = 'A';

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout << ch <<" ";
            ch += 1;
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

// A B C D
// E F G H
// I J K L
// M N O P
// Q R S T