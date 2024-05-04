#include <iostream>
using namespace std;

struct Square{
        int side ;
        
        int area(){
            return side*side;
        }
        int perimeter();
    };
    
    int Square::perimeter(){
        return 4*(side);
}
    
int main() {
    // structs
    
    Square s;
    s.side=10;
    
    int area= s.area();
    int perimeter = s.perimeter();
    
    cout << "area :" << area <<endl;
    cout << "perimeter :" <<perimeter;
    return 0;
}
