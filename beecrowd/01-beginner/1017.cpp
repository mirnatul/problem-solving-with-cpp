#include <iomanip>
#include <iostream>
using namespace std;

double lit(int time, int avgSpeed, int kmPerH) {
    double totKilo = time * avgSpeed;
    return totKilo / kmPerH;
}

int main() {
    int time, avgSpeed;
    const int kmPerH = 12;
    cin >> time >> avgSpeed;
    double liter = lit(time, avgSpeed, kmPerH);
    cout << fixed << setprecision(3);
    cout << liter << endl;
    return 0;
}