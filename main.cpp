#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int oldValue = 30;
    int newValue = 70;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == oldValue) {
            arr[i] = newValue;
            break;   
        }
    }

    // Print array
    cout << "Updated array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
