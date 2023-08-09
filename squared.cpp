#include "std_lib_facilities.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void square(int x) {
    cout << x * x << endl;
}

void square2(int x) {
    int result = 0;
    for (int i = 0; i < x; i++) {
        result += x;
    }
    cout << result << endl;
}

int main() {
    square(12);
    square2(12);
    cout << endl;
}