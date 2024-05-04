#include <iostream>
#include <string>
using namespace std;

int main(){
    // arrays
    cout << "\tarrays\n";

    // declaring array
    int arr[4];
   // arr = {1,1,1,1}; // ERROR
   arr[0]=1;
   arr[1]=1;
   arr[2]=1;
   arr[3]=1;
   cout << "arr :" << arr <<endl; // memory location of arr
 
    // declaring n initializing array
    int ary[3] ={1,2,3};
   // int ary1[3]{4,5,6}; // without `=` valid
   // int ary[3] ={1,2,3,4}; // ERROR : size more than 3

   // without size 
   int i[]={2,3,4,5,6}; // C++ will allocate size based on elements

   // either u set array size or write initializers

    // varibale as size
    int x = 5;
    int arr2[x]; // size 5
    int arr3[x+2]; // size = 7

    // 
    int r[4] = {9,8,7,6};
    cout << "r :" << r << endl; // prints address of `r`

    // index of elements
    cout << r[0] << endl; // first element = 9

    cout << r[4] << endl; // dont do this (not an error)
    cout << r[7] << endl; // dont do this (not an error) 

    // change element
    r[0]=10;
    cout << r[0] << endl; // now its 10

    // array of string
    string str[3]={"a","bc","4"};
    cout << "str :" << str << endl; // address of str

    // size of array
    int size = sizeof(str)/sizeof(str[0]);
    cout << "size of str :" << size << endl; // 3
    cout << "sizeof(str) in bytes :" << sizeof(str) << endl; // 72 bytes
    cout << "sizeof(str[0]) :" << sizeof(str[0]) << endl; // 24 bytes

    int sizeofArr = sizeof(arr)/sizeof(arr[0]);
    cout << "size of arr :" << sizeofArr << endl; // 4
    cout << "sizeof(arr) :" << sizeof(arr) << endl; // 16
    cout << "sizeof(arr[0]) :" << sizeof(arr[0]) << endl; // 4

    // last element of array = (size-1)
    cout << "last element :" << arr[(sizeofArr-1)] << endl;

    // 2D array
    // array with elements of type array
    int arr2D[4][2]= {{1,2},{3,4},{5,6},{7,8}};
     cout << "arr2D :" << arr2D <<endl; // location
}