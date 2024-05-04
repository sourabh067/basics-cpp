#include <iostream>
#include <string>
using namespace std;

int main(){
    // Arithematic Oprators
    cout << "Arithematic Oprators" << endl;

    int x=5; // 5 is assigned to x
    int y=10;
    
    // Addition
    int sum = x+y; // 15
    cout << "sum :" << sum << endl;

    int sum1 = x + y + 20; // 35
    cout << "sum1 :" << sum1 << endl;
    cout << "sum2 :" << sum + 3 << endl; // 18

    // substraction
    int ans = y-x; // 5
    cout << "ans :" << ans << endl;

    int ans1 = sum1 - sum; // 35 - 15 = 20
    cout << "ans1 :" << ans1 << endl;

    // division
    int result = y/x; // 2
    cout << "result :" << result << endl;

    float result1 = x/10.0; // 0.5
    cout << "result1 :" << result1 << endl;

    // multiplication
    int res = x * y;  // 50
    cout << "res :" << res << endl;

    // modulus
    cout << "reminder :" << y % x << endl; // 0
    cout << "reminder :" << 7 % 4 << endl; // 3
    
    // compound assignment
    int i = 8;
    i += 2;
    cout << "new i:" << i << endl; // i = i + 2 = 10
    i -= 8;
    cout << "new i:" << i << endl; // i = 10 - 8 = 2
    i *= 3;
    cout << "new i:" << i << endl; // i = 2 * 3 = 6
    i /= 6;
    cout << "new i:" << i << endl; // i = 6 / 6 = 1
    
    x+=y;
    cout << "new x : x += y :" << x << endl; // new x = 15

    // increment decrement by 1
    int j=2;
    cout << "new j:" << j++ << endl; // 2+1 =3 
    cout << "new j:" << j-- << endl; // 3-1 =2

}