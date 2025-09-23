#include <iostream>

using namespace std;

int enterNumber()
{
    int number;
    while (true)
    {

        cout << "Enter a number! ";
        cin >> number;

        if (cin.fail())
        {
            cout << "Oop, invalid! must be an Integer!" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
            break;
        }
    }
    return number;
}

int main()
{

    int operation;

    cout << " "
         << endl;

    auto num1 = enterNumber();
    auto num2 = enterNumber();

    while (true)
    {

        while (true)
        {
            cout << "\nEnter the operation!\n1. Addition\n2. Subtraction\n3. Division\n4.Multiplication\nEnter here: ";
            cin >> operation;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            else
            {
                break;
            }
        }

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
            int difference = num1 - num2;
            cout << num1 << " - " << num2 << " = " << difference << endl;
            break;
        }
        else if (operation == 3)
        {
            int quotient = num1 / num2;
            cout << num1 << " / " << num2 << " = " << quotient << endl;
            break;
        }
        else if (operation == 4)
        {
            int product = num1 * num2;
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