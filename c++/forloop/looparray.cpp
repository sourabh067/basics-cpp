#include <iostream>
using namespace std;

int main(){
    // loop through arrays
    cout << "\tloop through arrays\n";

    int arr[4] = {1,2,3,4};

    for (int i=0 ;i<4;i++){
        cout << "arr :" << arr[i] <<endl; // all elements of arr
    }

    for (int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout << "arr :" << arr[i] <<endl;
    }

    // add elements to array 
    int arr2[4];
    for (int i =0;i<4;i++){
        arr2[i] = i*3;
        cout << "arr2 :" << arr2[i] <<endl;
    }
}