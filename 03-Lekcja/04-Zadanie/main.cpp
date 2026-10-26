#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int i = 0;
    double srednia;

    cout << "Podaj 5 ocen: ";
    cin >> a >> b >> c >> d >> e;

    srednia = (a + b + c + d + e) / 5.0;

    if (a == 1) i++;
    if (b == 1) i++;
    if (c == 1) i++;
    if (d == 1) i++;
    if (e == 1) i++;

    cout << "Srednia ocen: " << srednia << endl;
    cout << "Liczba jedynek: " << i << endl;

    return 0;
}
