#include <iostream>
#include <exception>
using namespace std;

int main(){
   // multiple catch block

   try {
    // code with some e/err

    throw "error 1";  //  not recmd.
    throw runtime_error("error 1"); // instead

    throw 404; // to throw this comment out first throw

   }catch (const runtime_error& err){  // or const exception& err
    cout << "exception 1 :" << err.what() << endl;

   }catch (int& e){
    cout << "page not found :" << e;

   }catch(...){
      cout << "anyhting else e/err occured";
   }

}