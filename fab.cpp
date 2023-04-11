// #include <iostream>
// using namespace std;
// int fab(int n)
// {
//     if (n < 2)
//        { return 1;}

//     return fab(n - 1) + fab(n - 2);
// }
// int main()
// {
//     int a;
//     cout << "Enter any natural number : " << endl;
//     cin >> a;
//     cout << a << "th  element of fabnocci series is " << fab(a) << endl;

//     return 0;
// }
// File: pointers.cpp
// A program to test pointers and references
#include <iostream>
 using namespace std;
int  main()
{
    int intVar = 10;
    int *intPtr; // intPtr is a pointer
    intPtr = &intVar;
    cout << "\nLocation of intVar: " << &intVar;
    cout << "\nContents of intVar: " << intVar;
    cout << "\nLocation of intPtr: " << &intPtr;
    cout << "\nContents of intPtr: " << intPtr;
    cout << "\nThe value that intPtr points to: " << *intPtr;
    return 0;
}
