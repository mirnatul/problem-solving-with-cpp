#include <iomanip>
#include <iostream>
using namespace std;

double earnings(double fSalary, double sells) {
    return fSalary + (sells * (15.0 / 100));
    return 0;
}

int main() {
    string firstName;
    double fixedSalary, sells;
    cin >> firstName >> fixedSalary >> sells;
    double income = earnings(fixedSalary, sells);
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << income << endl;
    return 0;
}