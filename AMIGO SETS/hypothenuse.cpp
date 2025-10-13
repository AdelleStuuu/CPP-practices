#include <iostream>
#include <cmath>

using namespace std;

// a class that provides a loop for squaring a number
float power(float base)
{
    float result = 1.0;
    for (int i = 0; i < 2; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{

    // initialize variables
    float a, b;

    // accept input of a and b
    cout << "Enter A side: ";
    cin >> a;
    cout << "Enter B side: ";
    cin >> b;

    // provide calculation of the hypotenuse
    // a^2 + b^2 = c^2 which is:
    // c = sqrt of a^2 + b^2
    float c = sqrt((power(a) + power(b)));

    // output the result
    cout << "The hypothenuse of " << a << " and " << b << " is: " << c << endl
         << endl;
    return 0;
}