// Pointer (&, *)

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a; // Pointer to integer

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr (address of a): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}