#include <iostream>
#include <string>
using namespace std;

int add (int x ,int y); // func declaration (prototype)

int getNum();

int main(){
      // functions
      cout << "\tfunctions\n";

      int add1 = add(4,5); // call func add()
      cout << "add() :" << add1 <<endl;

      cout << "getNum() :" << getNum() <<endl;

      // reusing func
      cout << "reuse add() :" << add(9,10) <<endl;
}

int add (int x,int y){  // func definition
   return x+y;
}

int getNum(){
    cout << "from getNum() :" << endl; 
    return 9;
    return 5; // wont read this line
}

