#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    char ch = 'A'; // Start with character 'A'

    for(int i = 0; i < rows; i++) {      // Outer loop for each row
        
        for(int j = 0; j <= i; j++) {    // Inner loop prints the character 'ch' i+1 times
            cout << ch << " ";
        }

        ch++;                             // Move to next character (B, C, D...)
        cout << endl; 
    }

    return 0;
}


// sample output

// Enter number of rows: 5


// A
// B B
// C C C
// D D D D
// E E E E E