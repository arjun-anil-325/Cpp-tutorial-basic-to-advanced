#include <iostream>
using namespace std;

int main() {
    float marks;

    // Ask the user to enter marks
    cout << "Enter your marks: ";
    cin >> marks;

    // Check if entered marks are above 100, which is invalid
    if (marks > 100) {
        cout << "Invalid marks \n";
    } 
    else {
        // Grade calculation using if-else ladder

        if (marks >= 90) {
            cout << "Your grade is A+ \n"; // 90–100
        }
        else if (marks >= 80) {
            cout << "Your grade is A \n";  // 80–89
        }
        else if (marks >= 70) {
            cout << "Your grade is B \n";  // 70–79
        }
        else if (marks >= 60) {
            cout << "Your grade is C \n";  // 60–69
        }
        else if (marks >= 50) {
            cout << "Your grade is D \n";  // 50–59
        }
        else if (marks >= 40) {
            cout << "Your grade is E \n";  // 40–49
        }
        else {
            cout << "Your grade is F (Fail) \n"; // Below 40
        }
    }

    return 0;
}
