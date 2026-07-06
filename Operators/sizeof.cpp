// sizeof

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    double b = 10.5;
    char c = 'A';
    bool d = true;

    // Sizeof operator
    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of double: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(d) << " bytes" << endl;

    return 0;
}