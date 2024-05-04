#include <iostream>
using namespace std;

int main(){
   // pointers
   cout << "\tpointers\n";

   int x = 8;
   int *y = &x; // y points to address of x

   cout << " y :" << y << endl;
   cout << "&x :" << &x <<" &y :" << &y << endl;
   cout <<" &*y :" << &*y << endl; 

   cout <<" *y :" << *y << endl; // dereferncing

   int z=3;
   y=&z;
   *y = 5;
   cout << "z :" << z;

 }