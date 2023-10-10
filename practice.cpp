#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

class User {
public:
    string FirstName;
    string LastName;
    int Age;
    string Email;
};

int main() {
    User user1;

    cout << "First Name: " << user1.FirstName << endl;
    cout << "Last Name: " << user1.LastName << endl;
    cout << "Age: " << user1.Age << endl;
    cout << "Email: " << user1.Email << endl;

    int test;
    cout << test;

    cin.get();
}