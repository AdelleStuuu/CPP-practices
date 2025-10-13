#include <iostream>
#include <typeinfo>

using namespace std;
// the macro takes the variable's name
#define VariableName(var) cout << #var;

int main()
{
    // initialize the variables
    int Number = 10;
    char Letter = 'a';
    bool Result = true;
    float Float = 3.14;

    cout << "Name\tData Type\tValue" << endl;

    // use typeid to take the data type of the variable
    // create a table that takes the name, data type and value of the program
    VariableName(Number);
    cout << "\t" << typeid(Number).name() << "\t\t" << Number << endl;
    VariableName(Letter);
    cout << "\t" << typeid(Letter).name() << "\t\t" << Letter << endl;
    VariableName(Result);
    cout << "\t" << typeid(Result).name() << "\t\t" << Result << endl;
    VariableName(Float);
    cout << "\t" << typeid(Float).name() << "\t\t" << Float << endl
         << endl;

    return 0;
}