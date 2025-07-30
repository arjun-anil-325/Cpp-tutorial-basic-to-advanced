#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter no of rows : \n";
    cin >> rows;

    for(int i=0; i<rows; i++){            // outer loop which controls each line or no of rows.
        for(int j=0; j<rows-i-1; j++){    // first inner loop which prints space prior to the number
            cout << " ";
        }

        for(int j=1; j<=i+1; j++){        // second inner loop which prints number from 1 to i+1
            cout << j;
        }

        for(int j=i; j>0; j--){           // third inner loop which prints number from i to 1
            cout << j;
        }

        cout << endl;
    }
    
    return 0;
}

// sample output

// Enter no of rows : 
// 5


//     1
//    121
//   12321
//  1234321
// 123454321


