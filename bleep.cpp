#include "std_lib_facilities.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    string disliked = "pickles";
    string disliked1 = "vinegar";
    string disliked2 = "olives";

    vector<string> words;

    for (string temp; cin >> temp;) {
        words.push_back(temp);
    }
    
    for (int i = 0; i < words.size(); ++i) {
        if (words[i] == disliked || words [i] == disliked1 || words[i] == disliked2) {
            words[i] = "BLEEP";
        }
        cout << words[i] << endl;
    }
}