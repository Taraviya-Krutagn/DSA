//  Write a program to find whether the array contains a duplicate number or not.

#include <iostream>
#include <algorithm>
using namespace std;

bool containsDuplicate(int arr[], int n)
{
    sort(arr, arr + n);

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            return true;
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (containsDuplicate(arr, n))
        cout << "Duplicate Found";
    else
        cout << "No Duplicate";

    return 0;
}