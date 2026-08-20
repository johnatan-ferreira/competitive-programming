//Algoritmo de Euclides

#include <iostream>

using namespace std;

int main() {
    int x, a, b;

    cin >> x;

    for (int i = 0; i < x; i++) {
        cin >> a >> b;

        if (b > a) {
            int temp = a;
            a = b;
            b = temp;
        }

        if (a == b) {
            cout << a << endl;
        } else {
            if (a % b == 0) {
                cout << b << endl;
            } else {
                while (a % b != 0) {
                    int temp = a, temp2 = a / b;

                    a = b;
                    b = temp - (a * temp2);
                }

                cout << b << endl;
            }
        }
    }
}
