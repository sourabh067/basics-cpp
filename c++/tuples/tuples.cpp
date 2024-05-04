#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
    // tuples
    cout << "\ttuples\n";

    // way 1
    tuple<int, string> person(20, "Abc");

    // Accessing the elements of the tuple using get<>
    cout << "person[0] :" << get<0>(person) << endl; // 20
    cout << "person[1] :" << get<1>(person) << endl; // Abc
    
    // way 2 using make_tuple
    tuple<int,string> person2;
    person2 =make_tuple(3,"three");

    // change values
    get<0>(person2) = 4;

    // way 3
    tuple <char,bool> p1 = {'p1',true};

    // swapping
    tuple <char,bool> p2 = {'p2',false};
    p2.swap(p1);  // p1.swap(p2) same result
    cout << "swapped :" <<endl;

    p2.swap(p1); // back to original 
    cout << "back to OG :" <<endl;

    // decomposing
    char x ;
    bool y ;
    tie(x,y)=p2;
    cout << "tie : " << x << " " << y << endl; // p2 0

    // concatenation (combining)
    tuple <char,string> t1 = {'A',"a"};
    tuple <char,string> t2 = {'B',"b"};

    tuple <char,string,char,string> p3 =tuple_cat(t1,t2);
    
    cout << get<0>(p3) << endl; // p1
    cout << get<1>(p3) << endl; // 1
    cout << get<2>(p3) << endl; // p2
    cout << get<3>(p3) << endl; // 0

    // auto 
    auto p4 =tuple_cat(t1,t2);

    return 0;
}
