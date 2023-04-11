#include <iostream>
#include<stdio.h>
using namespace std;

int main()

{
    int  a;
    cout << "Enter any integer number whose you want table : " << endl;
    cin >> a;
    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
     
    
        
        
    // switch (a)
    // {
    // case 1:
    //     cout << "" << a * 1 << endl;
        
    // case 2:
    //     cout << "" << a * 2 << endl;
        
    // case 3:
    //     cout << "" << a * 3 << endl;
        
    // case 4:
    //     cout << "" << a * 4 << endl;
        
    // case 5:
    //     cout << "" << a * 5 << endl;
        
    // case 6:
    //     cout << "" << a * 6 << endl;

    // case 7:
    //     cout << "" << a * 7 << endl;

    // case 8:
    //     cout << "" << a * 8 << endl;

    // case 9:
    //     cout << "" << a * 9 << endl;

    // case 10:
    //     cout << "" << a * 10 << endl;
    //     break;

    // default:
    //     cout << "please chose no. between 0 and 11" << endl;
    //     break;
    // }

    return 0;
}