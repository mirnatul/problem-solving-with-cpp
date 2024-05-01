#include <iomanip>
#include <iostream>
using namespace std;

double kmperl(int km, double l) {
    return km / l;
}

int main() {
    int km;
    double l;
    cin >> km >> l;

    double z = kmperl(km, l);
    cout << fixed << setprecision(3);
    cout << z << " km/l" << endl;
    return 0;
}