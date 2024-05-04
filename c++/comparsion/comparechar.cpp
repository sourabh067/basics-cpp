#include <iostream>
#include <string>
using namespace std;

int main(){
    // comparing `char`

    bool res;

    res ='a' == 'b';
    cout << "equal to :" << res << endl; // 0

    res = 'a' == 'a';
    cout << "equal to :" << res << endl; // 1

    res = 'a' == 'A';
    cout << "equal to :" << res << endl; // 0

    res = 'a' != 'b';
    cout << "not equal to :" << res << endl; // 1

    res = 'b' != 'b';
    cout << "not equal to :" << res << endl; // 0

    res = 'b' != 'B';
    cout << "not equal to :" << res << endl; // 1

    res = 'a' < 'b';
    cout << "lesser than :" << res << endl; // 1

    res = 'b' > 'B';
    cout << "greater than :" << res << endl; // 1
}