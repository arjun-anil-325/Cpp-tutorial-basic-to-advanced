#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number up to which sum is calculated: ";
    cin >> n;

    int sum = 0; 

    for(int i = 1; i <= n; i++) {  
        sum += i;
        if(i == 5){
            break;             // now loop will not run till n, whenever i becomes 5, it will exit from the loop and we will get sum upto 5 natural nos
        }
    }

    cout << "Sum : " << sum << endl;

    return 0;
}