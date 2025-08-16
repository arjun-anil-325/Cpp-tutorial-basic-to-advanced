#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec;                                          // initialising a new vector vec with type int.
    cout << "Size of vector : " << vec.size() << endl;         // vec.size() calculates the size of the vector currently its not initialised and it will be zero
    
    vec.push_back(15);                                         // push_back function will add new elements to the vector from the back.
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45); 
    vec.push_back(55); 

    cout << "Size of vector after push back : " << vec.size() << endl;

    cout <<"Vector elements : \n";

    for(int value : vec){                                      // special for loop which gives stored value at index, not index value
        cout << value << endl;                                 // [15,25,35,45,55]
    }

    vec.pop_back();                                            // pop_back will delete the last element from the vector.

    cout <<"Vector elements after pop back : \n";

     for(int value : vec){
        cout << value << endl;                                 // [15,25,35,45]
    }

    cout << "Front value : "<<vec.front()<<endl;              // front() will gives the front value of the vector. // 15

    cout << "Back value : "<<vec.back()<<endl;                // back() will gives the back value of the vector.   // 45

    cout << "Second index element of vector : "<<vec.at(2) << endl;     // 35


    return 0;

}

// output

// Size of vector : 0
// Size of vector after push back : 5

// Vector elements :
// 15
// 25
// 35
// 45
// 55

// Vector elements after pop back :
// 15
// 25
// 35
// 45

// Front value : 15
// Back value : 45
// Second index element of vector : 35