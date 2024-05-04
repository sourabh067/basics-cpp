#include <iostream>
using namespace std;

int main(){
    // switch statement
    cout << "\tswitch statement\n";

    int x=3; // try x = 2 & 5
    switch (x+1){
       case 3 :
         cout << "x + 1 = 3\n";
         break;
       case 4:
         x+=x; // x = x + x --> 3 + 3
         cout << "new x :" << x <<endl;
         break;
       default :
        cout << "sum is neither of these";
        break;
    }
    

}

