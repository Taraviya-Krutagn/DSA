// search target element in array.

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;
            break;
        }
    }
    return -1;
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

    int key;
    cout << "Enter element which you want to find : ";
    cin >> key;

    int result = LinearSearch(arr, n, key);

    if (result != -1)
    {
        cout << "Index of target element is : " << result;
    }
    else{
        cout << "not found";
    }

    return 0;
}