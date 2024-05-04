#include <iostream>
#include <string>
using namespace std;

int main(){
    // comparing strings

    bool res;

    res = "abc" == "aBc";
    cout << res << endl; // 0

    res = "hey" != " hey";
    cout << res << endl; // 1

    cout << ("Abc"=="Abc"); // 1
}