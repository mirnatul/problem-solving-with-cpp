#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void calculations(double a, double b, double c, double pi) {
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (1.0 / 2) * a * c << endl;
    cout << "CIRCULO: " << pi * pow(c, 2) << endl;
    cout << "TRAPEZIO: " << (1.0 / 2) * (a + b) * c << endl;
    cout << "QUADRADO: " << pow(b, 2) << endl;
    cout << "RETANGULO: " << a * b << endl;
}

int main() {
    const double PI = 3.14159;
    double a, b, c;
    cin >> a >> b >> c;
    calculations(a, b, c, PI);

    return 0;
}