#include <iomanip>
#include <iostream>
using namespace std;

double avg(double x, double y, double a, double b) {
    return (x * a + y * b) / (a + b);
}

int main() {
    const double A = 3.5;
    const double B = 7.5;
    double a, b;
    cin >> a >> b;
    double z = avg(a, b, A, B);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << z << endl;
    return 0;
}