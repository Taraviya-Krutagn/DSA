#include <iostream>
using namespace std;

int a_and_b(int a, int b)
{
    return a & b;
}

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    int result = a_and_b(a, b);
    cout << "The result of a & b is: " << result << endl;

    return  0;
}