#include <iostream>
using namespace std;

void output(int time, int hour, int min, int sec) {
    if ((time / 60) / 60) {
        hour = (time / 60) / 60;
        time = time - hour * 60 * 60;
    }
    if (time / 60) {
        min = time / 60;
        time = time - min * 60;
    }
    cout << hour << ":" << min << ":" << time << endl;
}

int main() {
    int time;
    cin >> time;
    int hour = 0, min = 0, sec = 0;
    output(time, hour, min, sec);
    return 0;
}