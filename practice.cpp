#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number " << number << " is even.\n";
    } else {
        cout << "The number " << number << " is odd.\n";
    }

    return 0; 
}