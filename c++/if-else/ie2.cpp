#include <iostream>
using namespace std;

int main(){
    // without {}
    if (true) cout << "if" <<endl;
    else cout << "else" << endl;

    if (false) cout << "if" <<endl;
    else if (false) cout << "else-if 1" << endl;
    else if (true) cout << "else-if 2\n";
}