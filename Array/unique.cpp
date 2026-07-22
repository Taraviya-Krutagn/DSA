#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int unique = 0;

    for(int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    // take values to the array elements from the user
    cout << "Enter the elements of array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int result = unique(arr, n);

    cout << "Unique element is :" << result;

    return 0;
}