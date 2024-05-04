#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    // vectors
    cout << "\tvectors\n";

    vector<int> v1 = {1,2,3};

    // access elements
    cout << "v1[2] :" << v1[2] <<endl;
    cout << "front :" << v1.front() <<endl;
    cout << "back :" << v1.back() <<endl;

    // size
    cout << "size :" << v1.size() << endl;

    // push_back() 
    v1.push_back(5); // 5 last element
    cout << "size :" << v1.size() << endl;

    // capacity
    cout << "cap :" << v1.capacity() << endl;

    // pop_back()
    v1.pop_back(); // delete last element

    // decrease capacity 
    v1.shrink_to_fit();
    cout << "shrink cap :" << v1.capacity() << endl;
    
    // insert element
    v1.insert(v1.begin(),9);
    cout << "v1[0] :" << v1[0] <<endl; 

    v1.insert(v1.begin()+2,12);
    cout << "v1[2] :" << v1[2] <<endl; // 0 + 2 = 2nd element = 12
 
    // erase
    v1.erase(v1.begin()+2);
    
}