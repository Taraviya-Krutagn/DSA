// do update in array

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

void updateArray(int arr[], int size, int index, int newValue)
{
    if (index >= 0 && index < size)
    {
        arr[index] = newValue;
        cout << "Updated element at index " << index << " to " << newValue << endl;
    }
    else
    {
        cout << "Index out of bounds!" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    
    // take input
    cout << "Enter the elements of array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter target Index : " << " ";
    cin >> key;
    cout << endl;

    int value;
    cout << "Enter new value : " << " ";
    cin >> value;
    cout << endl;

    updateArray(arr, n, key, value);
    printArray(arr, n);

    return 0;
}