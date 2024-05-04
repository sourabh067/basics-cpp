#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // create file instance
    ofstream demofile("demo.txt");
    
    // write in file
    if (demofile.is_open()){ // check if file is open
        demofile << "writting into demo file.\n";
        demofile.close();

        cout << "written successfully" << endl;
    }else{
        cout << "error opening file " ;
        return 1;
    }
    
    // read form file
    ifstream sampleRead("sample.txt");
    string line;

        if (sampleRead.is_open()){
           cout << "content of sample.txt\n";

           while (getline(sampleRead,line)){
            cout << line << endl;
           }
           sampleRead.close();
        }else {
            cout << "error opening file " ;
            return 1;
        }
    return 0;
}