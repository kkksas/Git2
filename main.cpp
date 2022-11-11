#include <iostream>
#include "funcs.h"

using namespace std;

int main()
{
    cout << "Hello! Pick a math operation:" << endl;
    cout << "1. Addition (+);" << endl;
    cout << "2. Subtraction (-);" << endl;
    cout << "3. Division (/);" << endl;
    cout << "4. Multiplication (*)." << endl;
    cout << "Enter a num op operation: ";
    int choose;
    cin >> choose;
    switch(choose)
    {
        case 1:
            cout << "develop 1" << endl;
            break;
        case 2:
            Sub();
            break;
        case 3:
            cout << "develop 3" << endl;
            break;
        case 4:
            cout << "develop 4" << endl;
            break;
        default:
            cout << "We didn't find anything." << endl;
    }
    system("pause");
    return 0;
}

