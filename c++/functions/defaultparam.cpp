#include <iostream>
using namespace std;

int sum (int x,int y,int z = 5);
// z value is optional to be sent
// if its not sent then z = 5 will be used
// 5 is default value of z

int main(){
    // default parameters
    
    int result = sum(10,20,30);
    // z value is sent so it is 30 now
    cout << "z = 30 :" << result << endl;

    // using default value of z
    int result1 = sum(10,20);
    cout << "default :" << result1 << endl;
}

int sum(int x,int y,int z){
    return x+y+z; // 60 // 35
}