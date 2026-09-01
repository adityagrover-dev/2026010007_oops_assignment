#include <iostream>
using namespace std;

class Example
{
private:

    void privateFunction()
    {
        cout << "Private function is called." << endl;
    }

public:

    void publicFunction()
    {
        cout << "Public function is called." << endl;

        // Calling private function
        privateFunction();
    }
};

int main()
{
    Example obj;

    obj.publicFunction();

    return 0;
}