#include <iostream>
using namespace std;

int main(){
    // and ,or , not
    int x = 5;
    int y = 7;

    if (x==5 and y==7){ // instead of using &&
        cout << "and\n"; 
    }

    if (x==4 or y==7){ // or ||
        cout << "or\n";
    }

    if (not false){  // not !
        cout << "not";
    }
}