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
        case 1: cout << "develop 1";
        case 2: cout << "develop 2";
        case 3: cout << "develop 3";
        case 4: cout << "develop 4";
    }
    system("pause");
    return 0;
}

