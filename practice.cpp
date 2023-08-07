#include "std_lib_facilities.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char character = 'a';
    for (int integer = 97; integer<123; ++integer && ++character) {
        cout << character << '\t' << integer << '\n'; 
    }
}