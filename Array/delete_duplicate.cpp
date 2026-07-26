// Write a program to delete duplicate numbers from an array.

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    cout << "Enter array elements : " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_set<int> seen;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (seen.find(arr[i]) == seen.end())
        {
            seen.insert(arr[i]);
            arr[index++] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < index; i++)
        cout << arr[i] << " ";

    return 0;
}