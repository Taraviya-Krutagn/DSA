#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int Binary,digit;
    cout << "Enter a binary number: ";
    cin >> Binary;

    int Decimal = 0;
    int i = 0;

    while (Binary != 0)
    {
        digit = Binary % 10;
        Decimal += digit * pow(2, i);
        Binary = Binary / 10;
        i++;
    }

    cout << "Decimal representation: " << Decimal << endl;

    return 0;
}