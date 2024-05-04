#include <iostream>
using namespace std;

#define PI 3.142
#define AREA(r) (PI*r*r) 

// func-like macro
#define max(a,b) ((a<b) ? (b) : (a))

// chain macro
#define CAR COLOUR
#define COLOUR "red"

// ifdef undef
#define A 33
#undef A  // comment out 

int main() {
    // marcos
   
   cout << AREA(4) << endl;
   
   cout << max(3,4) << endl;
   
   cout << "colour " << CAR << endl; // chain macro
   
   // ifdef undef
   #ifdef A
   cout << A ;
   #else 
   cout << "A undefined\n";
   #endif
   
   // predefined
   char date[]=__DATE__;
   cout << "date : " << date << endl;
   
   cout << "time :" << (__TIME__) << endl;
   cout << "file :" << (__FILE__) << endl;
   cout << "line :" << (__LINE__) << endl;
   
   #define B "tiger"
   cout << B;

    return 0;
}