#include <iostream>
using namespace std;

int globalVar = 100;                                                    //Global variable

void showGlobal() {

    cout << "Inside showGlobal(): globalVar = " << globalVar << endl;   // This function uses the global variable
}

void localScopeExample() {
    
    int localVar = 50;                                                           // Local variable (only accessible inside this function)

    cout << "Inside localScopeExample(): localVar = " << localVar << endl;

    cout << "Inside localScopeExample(): globalVar = " << globalVar << endl;     // We can still access the global variable here
}

int main() {

    int localVar = 200;                                                          // Local variable in main (different from localVar above)

    cout << "Inside main(): localVar = " << localVar << endl;                   // This refers to main's localVar
    cout << "Inside main(): globalVar = " << globalVar << endl;                  // Access globalVar

    // Call other functions
    showGlobal();
    localScopeExample();

    return 0;
}

// sample output

// Inside main(): localVar = 200
// Inside main(): globalVar = 100
// Inside showGlobal(): globalVar = 100
// Inside localScopeExample(): localVar = 50
// Inside localScopeExample(): globalVar = 100
