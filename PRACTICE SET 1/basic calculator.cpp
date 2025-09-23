#include <iostream>

using namespace std;
int main()
{

    int num1, num2;
    int operation;

    cout << " "
         << endl;

    cout << "Enter your first number! ";
    cin >> num1;

    cout << "Enter your second number! ";
    cin >> num2;

    while (true)
    {
        cout << "\nEnter the operation!\n1. Addition\n2. Subtraction\n3. Division\n4.Multiplication\nEnter here: ";
        cin >> operation;

        cout << " "
             << endl;

        if (operation == 1)
        {
            int sum = num1 + num2;
            cout << num1 << " + " << num2 << " = " << sum << endl;
            break;
        }
        else if (operation == 2)
        {
            int difference = num1 + num2;
            cout << num1 << " - " << num2 << " = " << difference << endl;
            break;
        }
        else if (operation == 3)
        {
            int quotient = num1 + num2;
            cout << num1 << " / " << num2 << " = " << quotient << endl;
            break;
        }
        else if (operation == 4)
        {
            int product = num1 + num2;
            cout << num1 << " * " << num2 << " = " << product << endl;
            break;
        }
        else
        {
            cout << "Invalid input btw " << endl;
        }

        cout << " "
             << endl;
    }
    cout << " "
         << endl;
}