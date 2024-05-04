#include <iostream>
#include <string>
using namespace std;

int main(){
    // logical operators
    cout << "logical operators\n";

    // NOT `!`
    bool f = !true;  // not true = false = 0
    cout << "f :" << f << endl;

    cout << (!false) << endl; // 1

    cout << (!(2<1)) << endl; // !(2<1) =!false = true = 1

    // AND `&&`
    bool a = false;
    bool b = true;

    cout << "AND :" << (a && a) << endl; // 0
    cout << "AND :" << (a && b) << endl; // 0
    cout << "AND :" << (b && a) << endl; // 0
    cout << "AND :" << (b && b) << endl; // 1

    // OR `||`
    cout << "OR :" << (a || a) << endl; // 0
    cout << "OR :" << (a || b) << endl; // 1
    cout << "OR :" << (b || a) << endl; // 1
    cout << "OR :" << (b || b) << endl; // 1

    // Test
    bool test = !(!false || !true)&&1; // 0
    cout << "test :" << test << endl;

    // applying to int
    int x=2,y=1;
    test = (x<y) || (y==x); // false || false
    cout << "test int :" << test; // false = 0

}