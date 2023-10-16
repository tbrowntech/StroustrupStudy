#include <iostream>
using namespace std;

class Smartphone {
public:
    virtual void TakeASelfie()=0;
};

class Android:public Smartphone {
public:
    void TakeASelfie() {
        cout << "Android selfie\n";
    }
};

class IPhone:public Smartphone {
public:
    void TakeASelfie() {
        cout << "IPhone selfie\n";
    }
};

int main()
{
    Smartphone* s1 = new Android();
    Smartphone* s2 = new IPhone();
    s1->TakeASelfie();
    s2->TakeASelfie();
    return 0;
}
