#include <iostream>
#include <exception>
using namespace std;

int main(){
    // general catch

   try {
    // code with some e/err

    throw 404;

   }catch (...){ // catch e/err of any type
    cout << "some exception occured "<< endl;

   }

}