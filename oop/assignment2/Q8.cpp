#include <iostream>
using namespace std;
class demo {
    int obj_no;
public:

    demo(int n) {
        obj_no=n;
        cout << "Constructor of object " <<obj_no <<" called" << endl;
    }

    ~demo() {
        cout << "Destructor of object " <<obj_no <<" called" << endl;
    }
};

void test() {
    demo obj2(2);
    demo obj3(3);
    cout << "Inside test function" << endl;
}

int main() {
    demo obj1(1);
    cout << "Inside main" << endl;
    test();
    cout << "Back in main" << endl;
    return 0;
}