#include <iostream>
using namespace std;

int mins(int kilo) {
    return kilo * 2;
}

int main() {
    int kilo;
    cin >> kilo;
    int min = mins(kilo);
    cout << min << " minutos" << endl;
    return 0;
}