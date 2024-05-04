#include <iostream>
#include <set>
using namespace std;

int main(){
    // sets
    cout << "\tsets\n";

    set<char> s1 = {'c','b','a'};
    
    set<int> s2 = {4,3,2,3};
    for (auto itr=s2.begin();itr!=s2.end();++itr){
        cout << "s2 :" << *itr << endl;
    }

    // insert
    s2.insert(6);

    // erase
    s2.erase(2);

   // find
   if (s2.find(2)==s2.end()) cout << "2 not found\n";
   else cout << "2 found\n";
   
    
}