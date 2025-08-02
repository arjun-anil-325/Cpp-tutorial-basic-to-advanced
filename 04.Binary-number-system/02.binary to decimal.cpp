#include <iostream>
#include <cmath>
using namespace std;

bool isBinaryNo(int binaryNum){               // function to check binary number or not
    while(binaryNum > 0){

        int digit = binaryNum % 10;           // to get the last digit from the number.

        if(digit!=0 && digit!=1){             // if digit is not 0 or 1, then the function returns false.
            return false;
        }

        binaryNum /= 10;                      // divide number with 10 to repeat the process with remaining numbers.
    }
    return true;

}

int binaryToDec(int binaryNum){
    int res = 0, place = 0;                       

    while(binaryNum >0){
        int rem = binaryNum % 10;              // to take last number from binaryNum.  
        res += rem * pow(2,place);             // multiply rem with 2 to power place and update the place           
                                           
        place += 1;                             
        binaryNum /= 10;                       // then binaryNum is divided with 10 and repeat same operation to rest of numbers.
    }

    return res;
}
int main(){

    int binno;
    cout <<"Enter binary number : \n";
    cin >> binno;

    if(isBinaryNo(binno) == false){
        cout <<"Invalid Binary Number";
    }
    else{
        cout <<"Decimal no : "<<binaryToDec(binno)<<endl;
    }

    return 0;

}

// sample output

// i) Enter binary number :
// 1101

// Decimal no : 13

// ii) Enter binary number :
// 1012


// Invalid Binary Number