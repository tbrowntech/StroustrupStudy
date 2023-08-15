#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main() {
    double sum = 0;
    double high_temp = {};
    double low_temp = {};
    int no_of_temps = 0;

    vector<double> temps;

    for (double temp; cin >> temp;) {
        ++no_of_temps;
        sum += temp;
        if (temp > high_temp) {
            high_temp = temp;
        }
        if (temp < low_temp) {
            low_temp = temp;
        }
    }    
    cout << "High temperature: " << high_temp << endl;
    cout << "Low temperature: " << low_temp << endl;
    if (no_of_temps != 0) {
        cout << "Average temperature: " << sum/no_of_temps << endl;
    }
}