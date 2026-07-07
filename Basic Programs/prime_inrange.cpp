// WAP to print prime numbers between given interval

#include<iostream>
using namespace std;

int main()
{
    int lower, upper;

    cout << "Enter lower bound: ";
    cin >> lower;

    cout << "Enter upper bound: ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: ";

    for(int num = lower; num <= upper; num++)
    {
        bool isPrime = true;

        if(num <= 1)
            isPrime = false;
        else
        {
            for(int i = 2; i <= num / 2; ++i)
            {
                if(num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if(isPrime)
            cout << num << " ";
    }

    cout << endl;

    return 0;
}