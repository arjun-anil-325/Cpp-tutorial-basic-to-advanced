#include <iostream>
using namespace std;

bool isPalindrome(int num){

    if(num <= 0) return false;     // for 0 and negative nos, palindrome doesnt exists.

    int res = 0;
    int orgno = num;               // store our original number in another variable "orgno" because num will get changed in the loop.

    while(num > 0){
        int rem = num%10;
        res = res*10 + rem;
        num = num / 10;

     }
     if(res == orgno){             // if orgno is equal to the result, number is palindrome.
        return true;
     }
     
     return false;
}
int main(){

    int n;
    cout << "Enter the number : \n";
    cin >> n;

    if(n<=0){
        cout << "Invalid number \n";
    }

    else{
        if(isPalindrome(n) == true){
            cout<<n<<" is palindrome \n";
        }
    else{
        cout<<n<<" is not palindrome \n";
    }
}

return 0;

}

// sample output

// i) Enter the number : 
// 34543

// 34543 is palindrome

// ii) Enter the number : 
// 34567

// 34567 is not palindrome