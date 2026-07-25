// Read n numbers in an array then read two different numbers, replace 1st number with 2nd number in an array and print its index and final array

#include <iostream>
#include <vector>

using namespace std;

int main()
 {
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    vector<int> arr(n);

    // Input array
    cout << "Input array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter numbers(replace, replace with) : ";
    int firstNum, secondNum;
    cin >> firstNum >> secondNum;

    bool found = false;

    // Replace and print indices
    for (int i = 0; i < n; i++) {
        if (arr[i] == firstNum) {
            arr[i] = secondNum;
            cout << "Replaced at index: " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Number not found in the array." << endl;
    }

    // Print final array
    cout << "Final Array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}