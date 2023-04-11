#include <iostream>
using namespace std;
int sum(int n)
{
    {
        if (n == 0)
            return 0;
    }
    // return n * (n + 1) / 2
    return n + sum(n - 1);
}
int main()
{
    int a;
    cout << "Enter any natural no." << endl;
    cin >> a;
    cout << "sum of " << a << " natural no. is :" << sum(a) << endl;
    return 0;
}