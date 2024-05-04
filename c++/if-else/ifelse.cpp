#include <iostream>
#include <string>
using namespace std;

int main(){
    // if,else,else-if
    cout << "if,else,else-if\n";
    
    int x = 7;

    // if
    if (x > 8){
      cout << "x is lesser than 8\n";
    }
    
    if (x < 8){
        cout << "second if statement executed..\n";
        cout << "x is lesser than 8\n";
    }

    // nested if
    if (x==x){
        cout << "x==x \n";
        if (x < 8){
          cout << "nested if \n";
        }
    }

    // else
    if (x==8){
        cout << "x=7\n";
    }else{
        cout << "else executed\n";
    }

    // else if
    if (false){
        cout << "won't print";
    }else if(x==7){
        cout << "since if is false we check else-if and its true so we print this line\n";
    }

    // multiple else if
    if (false){
        cout << "won't print";
    }else if(false){
        cout << "won't print";
    }else if (false){
        cout << "won't print";
    }else if (true){
        cout << "since if and every other else if are flase this is printed\n";
    }else{
        cout << "if and every else-if are false else is executed";
    }

    // example
    if (x>10){
        cout << "x is larger than 10";
    }else if(x < 5){
        cout << "x is lesser than 5";
    }else {
        cout << "x is between 5 & 10";
    }
}