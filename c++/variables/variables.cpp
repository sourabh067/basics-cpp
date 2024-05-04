#include <iostream>
#include <string>

int main(){
    // declaring and initializing variables
    std::cout << "declaring and initializing variables\n";
    
    // way 1
    int x = 2; // 'x' is a variable of type 'int'
    std::cout << x << std::endl;

    int y = 3.7; // 3 its converted to 'int'
    std::cout << y << std::endl; 

    std::string z = "xBox";
    std::cout << z << std::endl;
    
    // way 2
    int a; // declared 
    a = 7; // initialized
    std::cout << a << std::endl;

    // way 3
    int b, c; // multiple variables at once
    b=5,c=6;
    std::cout << b << c << std::endl; // 56
    b=99;
    std::cout << b << std::endl; // updated to 99
    b=c;
    std::cout << b << std::endl; // 6 as b=c=6

    // way 4
    int i=1,j=2;
    std::cout << i  << std::endl << j;

}