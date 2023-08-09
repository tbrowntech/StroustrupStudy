#include "std_lib_facilities.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char characterU = 'A';
    for (int integerU = 65; integerU < 91; ++integerU && ++characterU) {
        cout << characterU << '\t' << integerU << '\n';
    }
    
    char characterL = 'a';
    for (int integerL = 97; integerL < 123; ++integerL && ++characterL) {
        cout << characterL << '\t' << integerL << '\n'; 
    }
}