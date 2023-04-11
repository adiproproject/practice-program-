#include<iostream>
using namespace std;
class A
{
    private:
    int x, y;
    public:
    A();
    A(int, int);
    void display();
};
A::A()
{
    x = 1;
    y = 2;
}
A::A(int a, int b)
{
    x = a;
    y = b;
}
void A::display()
{
    cout << "x=" << x << "\t"
         << "y=" << y << endl
        ;
}
int main()
{
A a1,a2(10,20);
a1.display();
a2.display();
return 0;

}
