#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int res = 0, place = 1;                       // initialize a variable "place" for tracking place of each digits.

    while(decNum >0){
        int rem = decNum % 2;                     // divide number by 2 and remainder is stored in "rem" variable
        res += rem*place;                         // rem is multiplied with place value and added to result.
                                           
        place *= 10;                              // place is multiplied with 10 to move to next digit ppace.
        decNum /= 2;                              // then number is divided by two to get quotient and store it in num variable and this process repeats.
    }

    return res;
}
int main(){

    int decNum;
    cout <<"Enter decimal number : \n";
    cin >> decNum;

    cout <<"Binary no : "<<decToBinary(decNum)<<endl;
    return 0;

}

// sample output

// Enter decimal number : 
// 10

// Binary no : 1010

// Enter decimal number : 
// 74

// Binary no : 1001010