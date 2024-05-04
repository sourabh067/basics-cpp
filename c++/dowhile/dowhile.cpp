#include <iostream>
using namespace std;

int main(){
    // while & do while
    cout << "\twhile & do while\n";
    
    // while
    int num=0;
    while (num !=1 && num !=2){ // anything other than 1 & 2 will be true
        cout << "Enter a 1 or 2 : ";
        cin >> num;
    }

    // break
    while (true){ // will run infinitly
       cout << "break keyword " << endl;
       break;
       cout << "this will b skipped... " << endl;
    }
    cout << "even though while is true while is exited\n";

    // continue
    int j =0;
    while (j<10){
        if (j==7 || j==9){
            j++;
         continue;
        }
        cout << "only odd j :" << j <<endl;
        j++;
    }

    // do while loop
    int i =0;
    do {
        cout << "i :" << i << endl;
        i++;
    }while(i<5); // make condition false to exit loop
}