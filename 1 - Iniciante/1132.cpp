#include <iostream>
using namespace std;

int main() {
    int x, y, cont = 0;

    cin >> x >> y;

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x; i <= y; i++) {
        if (i % 13 == 0) {
            continue;
        }

        cont = cont + i;
    }

    cout << cont << endl;
}
