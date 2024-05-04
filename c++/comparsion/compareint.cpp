#include <iostream>
#include <string>
using namespace std;

int main(){
    // comparsion operators
    cout << "comparsion operators" << endl;
    
    // comparing ints
    bool result; // true = 1 , false = 0

    // lesser than
    result = 1 < 2;
    cout << "lesser than " << result << endl; // 1

    //greater than
    result = 1 > 2;
    cout << "grester than " << result << endl; // 0

    //lesser than or equal to
    result = 2<=3;
    cout << "lesser than or equal to " << result << endl; // 1

    // greater than or equal to
    result = 2>=3;
    cout << "grester than or equal to " << result << endl; // 0

    // is not eqaul to
    result = 2 != 1;
    cout << "is not equal to " << result << endl; // 1

    // is equal to
    result = 2==1;
    cout << "is equal to " << result << endl; // 0
    
    return 0;
}