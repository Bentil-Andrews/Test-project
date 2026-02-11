#include <iostream>
using namespace std;

int main() {
    double tempC, tempF;

    cout << "Input temperature in Celsius: ";
    cin >> tempC;

    tempF = tempC * 9 / 5 + 32;

    cout << tempC << " Celsius is equal to "
         << tempF << " Fahrenheit." << endl;

    if (tempC < 0) {
        cout << "Weather is freezing." << endl;
    }

    if (tempC > 30) {
        cout << "The temperature is very hot." << endl;
    }

    return 0;
}

