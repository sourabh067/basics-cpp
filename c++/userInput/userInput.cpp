#include <iostream>
#include <string>

int main(){
    int x; 
    std::cin >> x; // input = 5 // try input = t
    std::cout << x << std::endl; // 5

    std::cout << std::cin.fail(); // valid so '0'

    float y;
    std::cin >> y; // input = r 
    std::cout<< y << std::endl; // 0

    std::cout << std::cin.fail(); // invalid so '1'

    int a,b;
    std::cin >> a;
    std::cin.clear(); // clears any error flag msg on console
    std::cin.ignore(100,'\n'); // ignores upto 100 characters input & moves to next line
    std::cin >> b;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    // string input
    std::cout << "Enter string :";
    std::string str;
    std::cin >> str;
    std::cout << str;

}