#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Podaj ciag znakow konczacy sie kropka lub wykrzyknikiem" << endl;
    char zn;
    int ilosc_malych = 0, ilosc_cyfr = 0;


    do
    {
        cin >> zn;
        if (zn >= '0' && zn <='9')
        {
            ilosc_cyfr++;
        }
        if (zn >= 'a' && zn <= 'z')
        {
            ilosc_malych++;
        }
    }
    while (zn != '.' && zn!='!');

    cout << "ilosc malych liter: " << ilosc_malych << endl;
    cout << "ilosc cyfr: " << ilosc_cyfr << endl;

    system("PAUSE");












    return 0;
}
