#include <iostream>
#include <exception>
using namespace std;

class CustomError : public exception {  
public:
    virtual const char* what() const _NOEXCEPT {
        return "custom error msg";
    }
};

int main() {
    try {
        throw CustomError();  // Throw an instance of CustomError
    } catch(const CustomError& e) {
        cout << e.what() << endl;
    }
    return 0;
}