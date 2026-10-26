#include <iostream>
using namespace std;

int main() {
    int a, b;
    char znak;

    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    cout << "Podaj znak dzialania (+, -, *, /, %): ";
    cin >> znak;

    if (znak == '+') {
        cout << "Wynik: " << a + b << endl;
    }
    else if (znak == '-') {
        cout << "Wynik: " << a - b << endl;
    }
    else if (znak == '*') {
        cout << "Wynik: " << a * b << endl;
    }
    else if (znak == '/') {
        if (b == 0) {
            cout << "Nie mozna dzielic przez zero!" << endl;
        }
        else {
            cout << "Wynik: " << (double)a / b << endl;
        }
    }
    else if (znak == '%') {
        if (b == 0) {
            cout << "Nie mozna wykonac modulo przez zero!" << endl;
        }
        else {
            cout << "Wynik: " << a % b << endl;
        }
    }
    else {
        cout << "Nieprawidlowy znak dzialania!" << endl;
    }

    return 0;
}
