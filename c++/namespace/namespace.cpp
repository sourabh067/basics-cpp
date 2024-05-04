#include <iostream>
using namespace std;

namespace car{
    int price;
    void colour(){
        cout << "Red";
    }
} // no semi colon

int main() {
    // namespace
    car::price = 100000;
    cout << "price :" << car::price <<endl;
   
    car::colour() ;

    return 0;
}