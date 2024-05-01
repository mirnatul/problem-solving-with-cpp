#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cin >> x >> y;
    int z = sum(x, y);
    cout << "SOMA = " << z << endl;
    return 0;
}