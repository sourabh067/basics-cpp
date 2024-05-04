#include <iostream>
using namespace std;

int main(){
    // ternary
    cout << "\tternary\n";
    
    int x = 3;
    if (x==3) cout << "x==3\n";
    else cout << "x!=3\n";

    (x==3) ? cout << "Tx==3\n" : cout << "Tx!=3\n";
}