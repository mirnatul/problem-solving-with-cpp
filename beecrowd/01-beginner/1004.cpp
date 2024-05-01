#include <iostream>
using namespace std;

int multi(int x, int y) {
    return x * y;
}

int main() {
    int a, b;
    cin >> a >> b;
    int z = multi(a, b);
    cout << "PROD = " << z << endl;
    return 0;
}