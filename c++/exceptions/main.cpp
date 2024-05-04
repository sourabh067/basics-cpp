#include <iostream>
#include <exception>
using namespace std;

int main(){
   int a =10 , b=1 , c;
   try {
      c =a /b; // this code may throw an error
      
      if (b==1) throw runtime_error("trying to divid by one"); 

   } catch (const exception& e){ // type of e/err to catch
     cout << "exception occured " << endl ;
     cout << e.what() << endl;
   }

}