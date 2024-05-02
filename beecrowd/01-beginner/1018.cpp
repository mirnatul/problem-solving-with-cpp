#include <iostream>
using namespace std;

void output(int money) {
    int changes[7] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int amount = money / changes[i];
        cout << amount << " nota(s) de R$ " << changes[i] << ",00" << endl;
        money %= changes[i];
    }
}

int main() {
    int money;
    cin >> money;
    cout << money << endl;
    output(money);
    return 0;
}