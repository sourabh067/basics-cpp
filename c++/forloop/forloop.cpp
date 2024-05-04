#include <iostream>
using namespace std;

int main(){
    // for loop
    cout << "\tfor loop\n";
    
    // way 1
    for (int j = 1;j<5;j++){
        cout << "j :" << j << endl;
    }

    // way 2 
    int a;
    for (a=3;a>0;a--){
        cout << "a :" << a << endl;
    }

    // way 3
    for (a=3;a<6;){
      cout << "a :" << a << endl;
      a++;
    }

    // increment by 3
    for (int i = -6 ;i<=6;i+=3){
        cout << "i+3 :" << i << endl;
    }

    // only even
    for (int i=0 ;i<10;i++){
        if (i % 2 == 0){
            cout << "even i :" << i << endl;
        }
    }
}