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

    cout << "enter x: ";
    double x;
    cin >> x;

    cout << "enter y: ";
    double y;
    cin >> y;

    switch(choose)
    {
        case 1:
            cout << x << " + " << y << " = " << MySum(x, y) << endl;
            break;
        case 2:
            cout << "develop 2" << endl;
            break;
        case 3:
            cout << "develop 3" << endl;
            break;
        case 4:
            cout << "develop 4" << endl;
            break;
        default:
            cout << "We did not find such an operation" << endl;
        break;
    }
    system("pause");
    return 0;
}

