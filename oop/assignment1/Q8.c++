#include <iostream>
using namespace std;

namespace First
{
    int value = 10;

    void display()
    {
        cout << "First namespace" << endl;
        cout << "Value = " << value << endl;
    }
}

namespace Second
{
    int value = 20;

    void display()
    {
        cout << "Second namespace" << endl;
        cout << "Value = " << value << endl;
    }
}

int main()
{
    First::display();

    cout << endl;

    Second::display();

    cout << endl;

    cout << "First value = " << First::value << endl;
    cout << "Second value = " << Second::value << endl;

    return 0;
}