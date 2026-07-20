// do sum of all the elements of array

#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;

    for(int i = 0 ; i < size ; i++)
    {
        sum += arr[i];
    }

    return sum;
}

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

    int sum_arr = sum(arr, n);

    cout << "Sum of given array is : " << sum_arr;

    return 0;
}