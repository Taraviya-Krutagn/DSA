#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,bit;
    cout << "Enter a decimal number: ";
    cin >> n;

    int Binary = 0;
    int i = 0;

    while (n != 0)
    {
        bit = n & 1;
        Binary += bit * pow(10, i);
        n = n >> 1;
        i++;
    }

    cout << "Binary representation: " << Binary << endl;

    return 0;
}