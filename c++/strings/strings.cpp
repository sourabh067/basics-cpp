#include <iostream>
#include <string>
using namespace std;

int main(){
    // strings
    cout << "\t strings\n";
    
    string str = "strings";
    cout << "index 0 :" << str[0] << endl; // s
    
    str[6]='!';
    cout << "new index 6 :" << str[6] << endl; // !

    // for loop
    for (int i =0;i<7;i++){
        cout << str[i] << endl;
    }

    // .size()
    cout << "size :" << str.size() <<endl;

    // .length()
    cout << "length :" << str.length() << endl;

    // storing characters of string in variable
     for (int i =0;i<str.length();i++){
        char c = str[i];
        cout << "c :" << c << endl;
    }

}