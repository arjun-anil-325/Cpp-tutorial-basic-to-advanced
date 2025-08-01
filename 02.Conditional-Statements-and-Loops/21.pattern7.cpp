#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++) {       // Outer loop controls the number of rows

        for(int j = 0; j <= i; j++) {     // Inner loop prints the value (i+1) in each row i+1 times
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}


// sample output

// Enter no of rows : 
// 5


// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

