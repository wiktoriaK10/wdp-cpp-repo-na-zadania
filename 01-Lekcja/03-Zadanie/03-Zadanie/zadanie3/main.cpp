#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string imie = "";
    int wiek = 0;
    double wzrost = 0.0;

    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Podaj wiek: ";
    cin >> wiek;

    cout << "Podaj wzrost w metrach: ";
    cin >> wzrost;

    cout << imie << endl;
    cout << wiek << endl;
    cout << fixed << setprecision(2) << wzrost << endl;

    return 0;
}
