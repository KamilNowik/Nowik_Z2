#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Podaj ciag znakow konczacy sie kropka lub wykrzyknikiem" << endl;
    char zn, zn_poprzedni;
    int ilosc_malych = 0, ilosc_cyfr = 0, powtorzenie = 0;

    do
    {
        zn_poprzedni=zn;
        cin >> zn;
        if (zn >= '0' && zn <='9')
        {
            ilosc_cyfr++;
        }
        if (zn >= 'a' && zn <= 'z')
        {
            ilosc_malych++;
        }
        if (zn_poprzedni=='&' && zn=='&')
        {
            powtorzenie++;
        }
    }
    while (zn != '.' && zn!='!');

    if (ilosc_cyfr > ilosc_malych)
    {
        cout << "wczytano wiecej cyfr (" << ilosc_cyfr << "), niz malych liter ("<< ilosc_malych << ")"<< endl;
    }

    if (ilosc_cyfr < ilosc_malych)
    {
        cout << "wczytano wiecej malych liter (" << ilosc_malych << "), niz cyfr ("<< ilosc_cyfr << ")"<< endl;
    }

    if (ilosc_cyfr == ilosc_malych)
    {
        cout << "wczytano tyle samo malych liter (" << ilosc_malych << "), ile cyfr ("<< ilosc_cyfr << ")"<< endl;
    }
    cout << "ilosc powtorzen znaku && bezposrednio po sobie wynosi: " << powtorzenie << endl;

    system("PAUSE");












    return 0;
}
