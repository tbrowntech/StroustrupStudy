#include "std_lib_facilities.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    double i = 0;
    double number1, number2;
    cin >> number1;
    cin >> number2;
    while (i < 1) {
        if (number1 < number2) {
            cout << "the smaller value is: " << number1 << endl;
            cout << "the larger value is: " << number2 << endl;
            if (abs(number1 - number2) <= 0.01) {
            cout << "the numbers are almost equal" << endl;
        }
        } 
        else if (number2 < number1) {
            cout << "the smaller value is: " << number2 << endl;
            cout << "the larger value is: " << number1 << endl;
            if (abs(number1 - number2) <= 0.01) {
            cout << "the numbers are almost equal" << endl;
        }
        }
        else if (number1 == number2) {
            cout << "the numbers are equal" << endl;
        } 
        i++;
    }
}