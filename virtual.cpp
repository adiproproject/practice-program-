#include <iostream>
using namespace std;
class baseclass
{

public:
    virtual void display()
    {
        cout << "base class display called " << endl;
    };
    void show()

    {
        cout << "base class display called " << endl;
    };
};

class derivedclass
{
public:
    void display()
    {
        cout << "derivesd class display called " << endl;
    };
    void show()

    {
        cout << "derivesd class display called " << endl;
    };
};

int main()
{
    baseclass *base;
    derivedclass D;
    //  base = &D;
    base->baseclass::display();
    base->show();

    return 0;
}