#include <iostream>
#include <string>
using namespace std;

int main(){
    // references
    cout << "\treferences\n";

    int x = 5;
    int &y =x ; // declaring reference y

    y = 3;
    cout << "x :" << x <<endl; // 3

    x = 9;
    cout << "x :" << x <<endl; // 9
    cout << "y :" << y <<endl; // 9

    // ref to ref
    int &z = y;
    z=108;
    cout << "x :" << x <<endl; // x is changed
    cout << "y :" << y <<endl; // y is also changed
    
    return 0;
}