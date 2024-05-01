#include <iomanip>
#include <iostream>
using namespace std;

double avg(double x, double y, double z, double a, double b, double c) {
    return (x * a + y * b + z * c) / (a + b + c);
}

int main() {
    const double A = 2;
    const double B = 3;
    const double C = 5;
    double a, b, c;
    cin >> a >> b >> c;
    double z = avg(a, b, c, A, B, C);
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << z << endl;
    return 0;
}