#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    // maps
    cout << "\tmaps\n";

    map <char,int> m ={ // d&i
        {'a',1},
        {'b',2}
    };
    cout << "m['a'] :" << m['a'] << endl;

    // add pair
    m['c'] = 3;
    cout << "m['c'] :" << m['c'] << endl;

    // using map.insert()
    m.insert(pair<char,int>('d',4));
    cout << "m['d'] :" << m['d'] << endl;

    pair <char,int> e5('e',5);
    m.insert(e5);
    cout << "m['e'] :" << m['e'] << endl;
    cout << e5.first << endl;
    cout << e5.second << endl;

    // erase pair
    m.erase(e5.first);
    cout << "erased :" << m['e'] << endl;

    // clear whole map
    m.clear();
    cout << "cleared :" << m['a'] << m['b']<< m['c']<< endl;

    // empty
    map <int,int> m2;
    cout <<"empty :"<< m2.empty() << endl; // 1 = true

    // size
    cout << "size :" <<m.size() << endl;

    
}