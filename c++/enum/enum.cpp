#include <iostream>
using namespace std;

enum week{
   monday = -2,  // -2 ,-1,0... // default 0
   tuesday,
   thrusday,
   friday,
   saturday,
   sunday =1 // in order = 3 but explicitly declared 1
};
    
int main() {
    // enumeration
    // enum
    
    week fri = friday;
    cout << fri << "\n";
    
    week sun = sunday;
    cout << sun; // 1 becoz explicitly sunday = 1;
   
}
