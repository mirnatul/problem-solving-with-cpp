#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double area(double pi, double r) {
    double x = pi * pow(r, 2);
    return x;
}

int main() {
    const double PI = 3.14159;
    double R;
    cin >> R;
    double ans = area(PI, R);
    cout << fixed << setprecision(4);
    cout << "A=" << ans << endl;
    return 0;
}