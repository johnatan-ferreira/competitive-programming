#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    while (true) {
        double x, y;

        while (true) {
            if (cin >> x) {
                if (x < 0 || x > 10) {
                    cout << "nota invalida" << endl;
                }
                else {
                    break;
                }
            }
        }

        while (true) {
            if (cin >> y) {
                if (y < 0 || y > 10) {
                    cout << "nota invalida" << endl;
                }
                else {
                    break;
                }
            }
        }

        cout << fixed << setprecision(2);
        cout << "media = " << (x + y) / 2 << endl;

        while (true) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            int valor;
            cin >> valor;
            if (valor == 1) {
                break;
            }
            if (valor == 2) {
                return 0;
            }
        }
    }
}
