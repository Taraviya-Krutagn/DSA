// find first and last position of an element in a sorted array

#include <iostream>
using namespace std;

int firstPosition(int arr[], int size, int key)
{
    // apply binary search

    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + ((end - start) / 2);

    while(start <= end)
    {
        if(key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int lastPosition(int arr[], int size, int key)
{
    // apply binary search
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = start + ((end - start) / 2);

    while(start <= end)
    {
        if(key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of an array : ";
    cin >> n;

    int arr[n];

    cout << "Enter array element (monotonic way): " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter " << i+1 << "th Element : ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter element which you want to find : ";
    cin >> key;

    int first = firstPosition(arr, n, key);
    int last = lastPosition(arr, n, key);

    if(first == -1 || last == -1)
    {
        cout << "Element not found.";
    }
    else
    {
        cout << "First position of " << key << " is : " << first << endl;
        cout << "Last position of " << key << " is : " << last;
    }

    return 0;
}