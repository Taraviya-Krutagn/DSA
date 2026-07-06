//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j < 2*n ; j++)
        {
            if(j <= (n-i) || j >= (n+i))
            {
                cout << "  ";
            }
            else if(j <= n)
            {
                cout << j - n + i << " ";
            }
            else
            {
                cout << n - j + i << " ";
            }
        }
        cout << endl;
    }
}