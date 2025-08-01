#include <iostream>
using namespace std;
int main(){
    float price = 250.987;
    int new_price = (int)price; // Casting from float to int truncates the decimal part.
    cout << new_price << endl; // (int)price is explicit type casting, which converts 250.987 to an integer by removing the decimal part.
    return 0;
}