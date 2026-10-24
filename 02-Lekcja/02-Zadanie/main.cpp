
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, d, e;

    cout << "Podaj piec ocen: ";
    cin >> a >> b >> c >> d >> e;

    double srednia = (a + b + c + d + e) / 5.0;

    cout << fixed << setprecision(2);
    cout << "Srednia ocen: " << srednia << endl;

    return 0;
}
