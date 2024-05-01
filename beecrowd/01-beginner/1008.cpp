#include <iomanip>
#include <iostream>
using namespace std;

double salary(int hour, double perHour) {
    return hour * perHour;
}

int main() {
    int sl, hour;
    double perHour;
    cin >> sl >> hour >> perHour;
    double sal = salary(hour, perHour);
    cout << "NUMBER = " << sl << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << sal << endl;
    return 0;
}