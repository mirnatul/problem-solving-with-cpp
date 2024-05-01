#include <iomanip>
#include <iostream>
using namespace std;

double total(int unit1, int unit2, double price1, double price2) {
    return ((unit1 * price1) + (unit2 * price2));
}

int main() {
    int prod1, unit1, prod2, unit2;
    double price1, price2;
    cin >> prod1 >> unit1 >> price1;
    cin >> prod2 >> unit2 >> price2;

    double totalPrice = total(unit1, unit2, price1, price2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << totalPrice << endl;
    return 0;
}