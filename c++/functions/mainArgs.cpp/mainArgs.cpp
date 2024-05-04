#include <iostream>
using namespace std;

// int main(int argc , char** argv)  

int main(int argc , char* argv[]) {
    // main() arguments
    
    cout << argc << " " ;
    cout << argv[0] ; // first ele always program name

    for (int i = 0;i<argc;i++){
       cout << argv[i] << " ";
    }
    
}