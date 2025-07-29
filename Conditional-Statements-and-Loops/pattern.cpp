#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    int num = 1;

    for(int i = 0; i < rows; i++) {       

        for(int j = 0; j < i + 1; j++) {
              cout << num << " ";
              num ++;
        }

        cout << endl;
    }

    return 0;
}

// sample output

// Enter number of rows: 5


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
