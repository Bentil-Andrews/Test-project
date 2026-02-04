#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;          // current number of elements
    int newValue = 70; // value to add

    if (n < 10) {              // check if array has space
        arr[n] = newValue;    // add 70 at the next position
        n++;                  // increase size
    } else {
        cout << "Array is full. Cannot add new value.\n";
    }

    // Print the array
    cout << "Array elements are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

