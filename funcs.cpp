#include <iostream>
#include "funcs.h"
#include <iostream>
using namespace std;

double Sum()
{
    double a,b;
    cout<<"enter number a"<<endl;
    cin>>a;
    cout<<"enter number b"<<endl;
    cin>>b;
    cout<< a<<"+"<<b<<"="<<a+b<<endl;
    return a+b;
}

void Sub()
{
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
//    cout << a - b;
    cout << a << " - " << b << " = " << a - b << endl;
}
