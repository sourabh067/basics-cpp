#include <iostream>
#include <vector>
using namespace std;

int main(){
    // iterating over vector

    vector<int> v2 = {9,8,7,6};

    for (int i=0;i<v2.size();++i){
        cout << "i " << v2[i] << "\n";
    }

    for (vector<int>::iterator itr=v2.begin();itr!=v2.end();++itr){
        cout << "itr " << *itr << "\n";
    }
}