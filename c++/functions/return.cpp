#include <iostream>
#include <string>
using namespace std;

string strFn(string a,string b);
pair<int,float> makePair(int x,float y);

int main(){
   // function return types can be various type
    
   cout << strFn("Full","Name") << endl;

   cout << makePair(3,0.14).second << endl;
}

// returning string
string strFn(string a,string b){
    return a + b; // concat a & b
}

// returning pair
pair<int,float> makePair(int x,float y) {
    return pair<int,float>(x,y);
}