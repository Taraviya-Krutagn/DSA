#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;

    // Performing Bubble Sort
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // Swap the elements
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(!swapped)
        {
            // No swaps means the array is already sorted
            break;
        }
    }
}

int main()
{
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: \n";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}