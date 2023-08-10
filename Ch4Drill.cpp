#include "std_lib_facilities.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<double> nums;
    double num;
    int i = 0;
    while (i < 2) {
        cin >> num;
        nums.push_back(num);
        i++;
        if (i != 1) {

            auto smaller = min_element(begin(nums), end(nums));
            auto larger = max_element(begin(nums), end(nums));
            if (end(nums) != smaller && larger != smaller) {
                cout << "The smaller value is: " << *smaller << endl;
            }

            if (end(nums) != larger && larger != smaller) {
                cout << "The larger value is: " << *larger << endl;
            }
        
            if (smaller == larger) {
                cout << "the numbers are equal" << endl;
            }

            if (abs(smaller - larger) <= 0.01 && larger != smaller) {
                cout << "the numbers are almost equal" << endl;
            }
        }
    }
    
    /*for (int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }*/

    
  
    /*int i = 0;
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
    }*/
}