#include <cmath>
#include <iostream>
using namespace std;

int greatest(int x, int y) {
    int m = ((x + y + abs(x - y)) / 2);
    return m;
}
int greatest2(int compare1, int z) {
    return ((compare1 + z + abs(compare1 - z)) / 2);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int compare1 = greatest(a, b);
    int final = greatest(compare1, c);
    cout << final << " eh o maior" << endl;
    return 0;
}