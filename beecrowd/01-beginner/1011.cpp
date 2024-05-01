#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double volume(double r, double pi) {
    return (4.0 / 3) * pi * pow(r, 3);
}

int main() {
    const double PI = 3.14159;
    double r;
    cin >> r;
    double vol = volume(r, PI);
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << vol << endl;
    return 0;
}