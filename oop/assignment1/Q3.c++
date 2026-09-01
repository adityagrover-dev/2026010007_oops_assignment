#include <iostream>
using namespace std;
int main()
{
    cout << "Normal for loop:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }
    cout << endl << endl;
    cout << "for loop without initialization:" << endl;
    int i = 0;
    for (; i < 5; i++)
    {
        cout << i << " ";
    }
    cout << endl << endl;
    cout << "for loop without increment:\n";
    i = 0;
    for (; i < 5;)
    {
        cout << i << " ";
        i++;
    }
    cout << endl << endl;
    cout << "while loop:\n";
    i = 0;
    while (i < 5)
    {
        cout << i << " ";
        i++;
    }
    cout << endl << endl;
    cout << "do-while loop:\n";
    i = 0;
    do
    {
        cout << i << " ";
        i++;
    }
    while (i < 5);
    cout << endl;

    return 0;
}