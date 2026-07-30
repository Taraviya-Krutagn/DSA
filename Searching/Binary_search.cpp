// Write a programm to implement binary search.
// its work only on Monotonic elements (Sorted array).

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while(start <= end)
    {
        if(key == arr[mid])
        {
            return mid;
            break;
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

    return -1;
}

int main()
{
    // Take size of array
    int size;
    cout << "Enter size of an array : ";
    cin >> size;

    int arr[size];

    // Take array element
    cout << "Enter array element(Monotonic array) : " << endl;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << "th Element : ";
        cin >> arr[i];
    }

    // take key value
    int key;
    cout << "Enter element which you want to find : ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if(result == -1)
    {
        cout << "Element not found.";
    }
    else{
        cout << "index of " << key << " is : " << result;
    }

    return 0;
}