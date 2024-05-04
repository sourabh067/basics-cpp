#include <iostream>
#include <map>
using namespace std;

int main(){
    // iterating over maps

    map<int,int> m = {{9,99},{8,88},{7,77}};

    for (auto itr =m.begin();itr != m.end();++itr){
        cout << itr->first << ":" << itr->second << endl;
    }

    // using iterator
    for (map<int,int>::iterator itr = m.begin();itr !=m.end();++itr){
        cout << "m.begin() key :" << m.begin()->first << endl;
        cout << "m.begin() value :" << (*itr).second << endl;
        break;
        // deference the iterator to get key-value of first pair.
    }
}