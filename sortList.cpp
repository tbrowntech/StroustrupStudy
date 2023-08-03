#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string input;

    cout<<"Enter names to be sorted.  Enter * to indicate you are done."<<endl;

    vector<string> list;
    while (input != "*")
        {
            cin>>input;
            list.push_back(input);
        }
    if (input == "*")
    {
        sort(list.begin(), list.end());

        for (int i = 0 ; i < (list.size() - 1);i++) {
            if (i == (list.size() - 2)) {
                cout << list[i];
            }
            else {
                cout << list[i] << ", ";
            }
        }
    }

    cout << endl;

    return 0;
}