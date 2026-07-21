#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlter(int arr[], int size)
{
    for (int i = 0; i < size-1; i+=2)
    {
        swap(arr[i], arr[i+1]);
    }

    cout << "Swaped Array :" << endl;

    printArray(arr,size);
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

    swapAlter(arr, n);

    return 0;
}