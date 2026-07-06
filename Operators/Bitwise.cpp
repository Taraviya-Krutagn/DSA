// &    // Bitwise AND
// |    // Bitwise OR
// ^    // Bitwise XOR
// ~    // Bitwise NOT (One's Complement)
// <<   // Left Shift
// >>   // Right Shift

#include<iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 0;

    // Bitwise AND
    cout << "Bitwise AND: " << (a & b) << endl;

    // Bitwise OR
    cout << "Bitwise OR: " << (a | b) << endl;

    // Bitwise XOR
    cout << "Bitwise XOR: " << (a ^ b) << endl;

    // Bitwise NOT
    cout << "Bitwise NOT: " << (~a) << endl;

    // Left Shift
    cout << "Left Shift: " << (a << 1) << endl;

    // Right Shift
    cout << "Right Shift: " << (a >> 1) << endl;

    return 0;
}