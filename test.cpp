#include <iostream>

using namespace std;

void zad1()
{
    cout << "Imie: Oskar\nNr: 32217\nUczelnia: PJATK Gdansk\n";
}

void zad2()
{
    int liczba = 0;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba == 0)
        cout << "Liczba jest 0\n";
    else if (liczba > 0)
        cout << "Liczba jest dodatnia\n";
    else
        cout << "Liczba jest ujemna\n";
}

void zad3()
{
    int liczba = 0;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba == 0)
        cout << "Liczba nie jest ani parzysta ani nieparzysta (0)\n";
    else if (liczba % 2 == 0)
        cout << "Liczba jest parzysta\n";
    else
        cout << "Liczba jest nieparzysta\n";
}

void zad4()
{
    int liczba1 = 0, liczba2 = 0, liczba3=0;
    cout << "Podaj 3 liczby: ";
    cin >> liczba1 >> liczba2 >> liczba3;

    cout << "Najwieksza liczba: " << max(liczba1, max(liczba2, liczba3))<<"\n";
}

int main(int argc, char** argv)
{
    int zadanie = 0;

    while (true)
    {
        cout << "Wybierz zadanie (1-4), 0 wylacza program: ";
        cin >> zadanie;

        switch (zadanie)
        {
        case 1:
            zad1();
            break;
        case 2:
            zad2();
            break;
        case 3:
            zad3();
            break;
        case 4:
            zad4();
            break;
        case 0:
            return 0;
        default:
            cout << "Niepoprawna opcja\n\n";
            break;
        }
    }
}

