#include <iostream>
using namespace std;

int AP(int n)
{
    return ((3 * n) + 7);
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int result = AP(n);
    cout << "The " << n << "th term of the AP is: " << result << endl;

    return 0;
}