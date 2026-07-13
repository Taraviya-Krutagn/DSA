#include <iostream>
using namespace std;

void OddEven(int n)
{
    if(n % 2 == 0)
    {
        cout << n << " is even." << endl;
    }
    else
    {
        cout << n << " is odd." << endl;
    }
}

int main()
{
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;

    OddEven(n);

    return 0;
}