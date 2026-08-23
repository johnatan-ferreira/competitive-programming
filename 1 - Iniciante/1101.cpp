#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int x[2];

    while (cin >> x[0] >> x[1]) {
        if (x[0] <= 0 || x[1] <= 0) {
            return 0;
        }

        sort(x, x + 2);

        int cont = 0;

        for (int i = x[0]; i <= x[1]; i++) {
            cout << i << " ";
            cont = cont + i;
        }

        cout << "Sum=" << cont << endl;
    }
}
