#include <iostream>
using namespace std;

void unique(int arr[], int size)
{
    int unique_index = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == arr[unique_index])
        {
            unique_index += 1;
            continue;
        }
        else
        {
            
        }
    }
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

    return 0;
}