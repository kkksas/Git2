#include <iostream>
#include "funcs.h"
#include <iostream>
using namespace std;

void Sum()
{
    double a,b;
    cout << "enter number a" << endl;
    cin>>a;
    cout << "enter number b" << endl;
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;
}

void Sub()
{
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << a << " - " << b << " = " << a - b << endl;
}

void Div()
{
    double a, b;
    while (true)
    {

        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        if (b == 0)
        {
            cout << "You cannot divide by 0" << endl;
        }
        if (b != 0)
        {
            break;
        }
    }

    cout << a << " / " << b << " = " << a / b << endl;
}
void Mul(){
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << a << " * " << b << " = " << a*b << endl;

}
