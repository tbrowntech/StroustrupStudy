#include "std_lib_facilities.h"

int main() {
    try {
        // your code here
        if (true) {
            cout << "Success!\n";
        } else {
            cout << "Fail!\n";
        }
        keep_window_open();
        return 0;
    }
    catch (exception& e){
        cerr << "error: " << e.what() << endl;
        keep_window_open();
        return 1;
    }
    catch(...) {
        cerr << "Oops: unknown exception!" << endl;
        keep_window_open();
        return 2;
    }
}