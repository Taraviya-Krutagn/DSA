// Write a program to calculate average of first n numbers

#include <iostream>
using namespace std;

float avg(int arr[], int size)
{
    float avg;
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    avg = sum / size;

    return avg;
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

    cout << "Average of given array : " << avg(arr, n);

    return 0;
}