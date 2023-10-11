#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

class User {
public:
    string FirstName;
    string LastName;
    int Age;
    string Email;

    // empty default constructor
    // User(){}
    // default constructor
    User() {
        FirstName = "nn";
        LastName = "nln";
        Age = 0;
        Email = "not set";
    }
    // params constructor
    User(string fName, string lName, int age) {
        FirstName = fName;
        LastName = lName;
        Age = age;
        Email = fName + "." + lName + "@mail.com";
    }
};

void getUserInfo(User u) {
    cout << "First Name: " << u.FirstName << endl;
    cout << "Last Name: " << u.LastName << endl;
    cout << "Age: " << u.Age << endl;
    cout << "Email: " << u.Email << endl;
}

int main() {
    User user1("Taylor", "Brown", 32);
    User user2("Kallie", "Brown", 33);

    getUserInfo(user1);
    cout << endl;
    getUserInfo(user2);

    cin.get();
}