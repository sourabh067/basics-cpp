#include <iostream>
#include <string>
using namespace std;

int main() {
    // type casting
    
    // implicit compiler takes care of it
    int a =4.4; // 4 
    cout << "a :" << a<< endl; 
    
    // explicit 
    float b = 5.2;
    // int c = (int)b; // c type cast
    int c = static_cast<int>(b);
    
    cout << "b :" <<b<< endl;
    cout << "c :" <<c<< endl;
    
    // what type
    cout << "b type :" << typeid(b).name() <<endl; // f == float
    
    char n = 'u';
    cout << "char to int :" << (int)n <<endl;
    
    // to_string
    int ia = 5;
    cout << "int to string :" << to_string(ia) <<endl;
    
    // stoi
    string ai = "110";
    cout << "string to int :" << stoi(ai) ;

    return 0;
}