#include <iostream>
using namespace std;

int getVar(){
    
    static int c = 4; // try without static 
    
    return c++;
}

int main() {
    // static variables

    for (int i=0;i<5;i++){
    cout << "func c :" << getVar() << endl; // since its value is retained
    }
    
}