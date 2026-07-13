#include <iostream>
using namespace std;

int nthEleOfFibonacci(int n)
{
    if (n <= 0)
    {
        cout << "Invalid input: n must be a positive integer." << endl;
        return -1; 
    }
    else if (n == 1)
    {
        return 0; 
    }
    else if (n == 2)
    {
        return 1; 
    }

    int sl = 0, l = 1, c;

    for (int i = 3; i <= n; i++)
    {
        c = sl + l;
        sl = l;
        l = c;
    }

    return c;
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int result = nthEleOfFibonacci(n);
    
    if(result != -1)
    {
        cout << "The " << n << "th element of the Fibonacci series is: " << result << endl;
    }

    return 0;
}