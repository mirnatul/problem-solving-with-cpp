#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;
    double output = distance(a, b, c, d);
    cout << fixed << setprecision(4);
    cout << output << endl;
    return 0;
}