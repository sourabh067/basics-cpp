#include <iostream>
using namespace std;

int main(){
    // pointers and arrays
    cout << "\tpointers\n";
   
    int x[] = {1,2,3};
    int *y = x;

    for (int i = 0;i<3;i++){
        y=x+i; // adding 1 gives subsequent addresses.
        cout << *y << endl;
    }

}