#include "std_lib_facilities.h"

double temp = 0;
char unit = {};

double ctok(double c) // converts Celsius to Kelvin
    {
        if (c > -273.15) 
        {
            double k = c + 273.15;
            return k;
        } 
        else 
        {
            cout << "error: value below absolute zero entered.\n";
            return 1;
        } 
    }

double ktoc(double k)  // converts Kelvin to Celcius
{
    if (k >= 0)
    {
        double c = k - 273.15;
        return c;
    }
    else
    {
        cout << "error: k cannot be less than 0 (absolute 0)";
        return 1;
    }
}

char getUnit()
{
    cout << "This program converts Kelvin (k) to Celcius (c), or Celcius to\n" 
            "Kelvin. From which unit would you like to convert? (k or c) ";
    cin >> unit;
    if (unit == 'k' || unit == 'K')
    {
        return 'k';
    }
    else if (unit == 'c' || unit == 'C')
    {
        return 'c';
    }
    else
    {
        cout << "invalid entry, please enter k or c\n";
        getUnit();
    }
    return 0;
}

void getTemp() 
{
    cout << "What is the temperature? ";
    cin >> temp;
}

double calcTemp(char unit)
{
    if (unit == 'k')
    {
        getTemp();
        ktoc(temp);
    }
    else if (unit == 'c')
    {
        getTemp();
        ctok(temp);
    }
}

int main() {
    getUnit();
    pickFormula(unit);
}