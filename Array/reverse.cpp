// reverse the array elements.

#include <iostream>
using namespace std;

int main()
{
   int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements in array : " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << "Enter " << i << "th element : ";
        cin >> arr[i];
    }

    cout << "main array : " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "reversed array : " << endl;
    for(int i = n-1; i >= 0 ; i--)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}