#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

void func (){ 

  // throw runtime_error("404");

  throw runtime_error("excp run time"); // first catch is called
}

int main(){
    
    try {
        func(); // func() may throw e/err so call here.
    }catch(const runtime_error& e){
       cout << "page not found " << e.what() ;

    }catch(const exception& e){
        cout << "e/err occured " << e.what() ;
    
    }

}