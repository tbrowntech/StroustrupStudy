#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
    {
        double k = c + 273.15;
        return k;
    }

int main() {
    double c = 0;
    cin >> c;
    try {        
        if (c > -273.15) {
            double k = ctok(c);
            cout << k << " Kelvins\n";
        } else {
            throw (c);
        }
    }
    catch (double belowAbsZero) {
        cout << "You have entered a value below absolute zero.\n";
        cout << "value entered: " << belowAbsZero << " degrees Celcius\n";
    }   
}