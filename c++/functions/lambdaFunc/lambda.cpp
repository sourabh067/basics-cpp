
#include <iostream>
using namespace std;

int main() {
    // lambda function
    int x=10,y=7;
    
    // with empty capture list
    auto add = [](int a,int b){
        return a+b;
    };
    
    // with capture list
    auto subs = [x,y](){ // capture value
        return x-y;
    };
    
    auto increment = [&x](){  // capture refernece
        return ++x;
    };

    auto capRef = [&](){   // capture ALL scope variables by ref
        cout << "capRef :" << x * y << endl;
    };

    auto capValue = [=](){   // capture ALL scope variables by value
        cout << "capValue :" << x * y << endl;
    };
    
    // with both capture & args
    auto allAdd = [x,y](int i,int j){
        return x+y+i+j;
    };
    
    cout << "add :" << add(4,3) << endl;
    cout << "subs :" << subs() << endl;
    cout << "increment :" << increment() << endl;
    cout << "new x :" << x << endl; 
    capRef();
    capValue();
    cout << "allAdd :" << allAdd(22,33);

    return 0;
}