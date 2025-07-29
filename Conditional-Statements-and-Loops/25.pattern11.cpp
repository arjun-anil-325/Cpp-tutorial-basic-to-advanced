#include <iostream>  
using namespace std;
int main() {

    int rows; 

    cout << "Enter number of rows for pattern: ";
    cin >> rows;  

    for(int i = 0; i < rows; i++) {          // Outer loop: controls the number of rows
       
        for(int j = i + 1; j > 0; j--) {     // Inner loop: prints decreasing numbers starting from (i+1) to 1
            cout << j << " ";  
        }
        cout << endl;  
    }

    return 0;  
}

// sample output

// Enter no of rows : 
// 5


// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
