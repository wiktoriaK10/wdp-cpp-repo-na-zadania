#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Nie mozna dzielic przez zero!" << endl;
    }
    else if (a % b == 0) {
        cout << "Liczba " << a << " jest podzielna przez " << b << endl;
    }
    else {
        cout << "Liczba " << a << " nie jest podzielna przez " << b << endl;
    }

    return 0;
}
