#include <iostream>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

void swap1(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    // pass by reference
    int a = 4;
    int b = 5;
    swap(a,b);
    
    cout << a << " " << b << endl;

    // pass by pointer
    swap1(&a,&b);
    cout << a << " " << b ;
}