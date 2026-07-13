#include <iostream>
using namespace std;

void isPrime(int n)
{
    if (n < 0)
    {
        cout << n << " invalid input." << endl;
        return;
    }

    else if (n == 1)
    {
        cout << n << " is not a prime number." << endl;
        return;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number." << endl;
            return;
        }
    }

    cout << n << " is a prime number." << endl;
}

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    isPrime(n);

    return 0;
}