// Demo of array.

#include <iostream>
using namespace std;

int main() {

    // Create an array of integers with 5 elements
    int arr[5];

    // take values to the array elements from the user
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    // Print the array elements
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    // access element using index
    cout << "Element at index 2 is: " << arr[2] << endl;

    return 0;
}