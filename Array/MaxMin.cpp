#include <iostream>
#include <climits>

using namespace std;

int Max(int a[], int size)
{
    int maxVal = INT_MIN;
    for (int i = 1; i < size; i++)
    {
       maxVal = max(maxVal, a[i]);
    }
    return maxVal;
}

int Min(int a[], int size)
{
    int minVal = INT_MAX;
    for (int i = 1; i < size; i++)
    {
        minVal = min(minVal, a[i]);
    }
    return minVal;
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

    int maxValue = Max(arr, n);
    cout << "The maximum value in the array is: " << maxValue << endl;

    int minValue = Min(arr, n);
    cout << "The minimum value in the array is: " << minValue << endl;

    return 0;
}
