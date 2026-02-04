#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    if (celsius < 0) {
        cout << "Freezing!" << endl;
    } else if (celsius > 30) {
        cout << "Hot!" << endl;
    }

    return 0;
}

    system("PAUSE");
    return EXIT_SUCCESS;
}
