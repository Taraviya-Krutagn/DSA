// Write a program to delete a number from a given location in an array

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos;
    cout << "Enter the position to delete (1 to " << n << "): ";
    cin >> pos;

    // Check for valid position
    if (pos < 1 || pos > n)
    {
        cout << "Invalid Position!";
        return 0;
    }

    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--; // Reduce array size

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}