#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
    {
        if (c > -273.15) {
            double k = c + 273.15;
            return k;
        } else {
            cout << "error: value below absolute zero entered.\n";
            return c;
        } 
    }

int main() {
    double c = 0;
    cin >> c;

    double calc = ctok(c);
    cout << calc << endl;
}