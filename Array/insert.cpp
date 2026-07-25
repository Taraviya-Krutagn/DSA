// Write a program to insert a number at a given location in an array

#include <iostream>
using namespace std;

int main() 
{
    int arr[100], n, pos, num;

    // Input array size
    cout << "Enter the number of elements: ";
    cin >> n;

    // Input array elements
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input number and position
    cout << "Enter the number to insert: ";
    cin >> num;

    cout << "Enter the position (1 to " << n + 1 << "): ";
    cin >> pos;

    // Check for valid position
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid Position!";
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos - 1] = num;
    n++;

    // Print updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}