#include <iostream>
using namespace std;

int addTwo(int x, int y) {
    return x + y;
}

int main() {
    int a, b, x;
    cin >> a >> b;
    x = addTwo(a, b);
    cout << "X = " << x << endl;
    return 0;
}