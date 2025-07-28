#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter no of rows : \n";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int num = 1;                        // Start each row with number 1

        for (int j = 0; j < i + 1; j++) {
            cout << num << " ";             // Print the number
            num++;                          // Increment the number
        }

        cout << endl; 
    }

    return 0;
}

// sample output

// Enter no of rows : 
// 5

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


