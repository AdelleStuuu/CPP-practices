#include <iostream>
#include <limits>

using namespace std;
int main()
{
    int age;

    while (true)
    {
        cout << "Enter your age here! ";
        cin >> age;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            break;
        }
    }

    cout << endl;

    if (age >= 60)
    {
        cout << "You are a senior" << endl;
    }
    else if (age >= 18)
    {
        cout << "You are an adult" << endl;
    }
    else
    {
        cout << "You are a minor" << endl;
    }

    if (age >= 18)
    {
        cout << "You are eligible for voting" << endl;
    }

    cout << endl;
    return 0;
}