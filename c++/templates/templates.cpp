#include <iostream>
using namespace std;

// function template
template <typename T>
T add (T a , T b){
    return a+b;
}

// class template
template <class C>
class Pair{
    C first, second;
    public:
    Pair(C f,C s): first(f) ,second (s){}
    
    C getFirst(){return first;}
    C getSecond () {return second;}
};

int main() {
    // templates
    
    // function template 
    cout << add(3,4) <<endl;   // T will be int
    cout << add(3.2,4.3) << endl;  // T will be double
    
    // class template
    Pair p(3,5);
   cout <<  p.getFirst() << endl;
    cout << p.getSecond();

    return 0;
}