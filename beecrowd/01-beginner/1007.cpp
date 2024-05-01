#include <iostream>
using namespace std;

int calc(int w, int x, int y, int z) {
    return w * x - y * z;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int z = calc(a, b, c, d);
    cout << "DIFERENCA = " << z << endl;
    return 0;
}