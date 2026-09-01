#include <iostream>
using namespace std;
class demo {
    int obj_no;

public:
    demo(int n) {
        obj_no = n;
        cout << "Constructor of Object " << obj_no << " called" << endl;
    }
    ~demo() {
        cout << "Destructor of Object " << obj_no << " called" << endl;
    }
};

int main() {
    demo obj1(1);
    demo obj2(2);
    demo obj3(3);

    return 0;
}