// // Member_Access
// obj.name;
// ptr->name;

#include <iostream>
using namespace std;

class MyClass {
public:
    int myNumber;

    void displayNumber() {
        cout << "My number is: " << myNumber << endl;
    }
};

int main() {
    MyClass obj;
    obj.myNumber = 42; // Accessing member variable
    obj.displayNumber(); // Accessing member function

    MyClass* ptr = &obj; // Pointer to object
    ptr->myNumber = 100; // Accessing member variable using pointer

    return 0;
}