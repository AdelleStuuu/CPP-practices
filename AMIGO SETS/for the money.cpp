#include <iostream>

using namespace std;
int main()
{
    float philippinePeso;
    cout << "Enter Philippine Peso: ";
    cin >> philippinePeso;

    float dollar, euro, yuan, koruna, krone, sheqel, dinar;

    dollar = philippinePeso / 43.33089;
    euro = dollar * .734719;
    yuan = dollar * 6.346934;
    koruna = dollar * 18.77263;
    krone = dollar * 5.449007;
    sheqel = dollar * 3.726334;
    dinar = dollar * .274588;

    cout << endl;
    cout << "Dollar\t:\t" << dollar << endl;
    cout << "Euro\t:\t" << euro << endl;
    cout << "Yuan\t:\t" << yuan << endl;
    cout << "Koruna\t:\t" << koruna << endl;
    cout << "Krone\t:\t" << krone << endl;
    cout << "Sheqel\t:\t" << sheqel << endl;
    cout << "Dinar\t:\t" << dinar << endl
         << endl;
    return 0;
}
