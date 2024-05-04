#include <iostream>
#include <cstdarg>  // header 
using namespace std;

void vfunc(int count, ...){  // any type values
    va_list vals; 
    
    va_start(vals,count);  // init list ; values & number of args
    
    for (int i = 0;i<count;i++){
        cout << va_arg(vals,double)<< " "; // all values & type
    }
    va_end(vals); // end of list
   
}

int main() {
    // variadic
    
    vfunc(3,1.9,2.8,3.7); // first arg = number of args
    
}