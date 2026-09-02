#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    typedef struct num {
        uint64_t valor, ref;
    };

    vector<num> n1(32), n2(32);

    n1[31].ref = 1;
    n2[31].ref = 1;

    for (int i = 30; i >= 0; i--) {
        n1[i].ref = n1[i + 1].ref * 2;
        n2[i].ref = n2[i + 1].ref * 2;
    }

    uint64_t x, y;

    while (cin >> x >> y) {
        uint64_t soma = 0;

        for (int i = 0; i < 32; i++) {
            n1[i].valor = 0;
            n2[i].valor = 0;
        }

        for (int i = 0; i < 32; i++) {
            if (x >= n1[i].ref) {
                x = x - n1[i].ref;
                n1[i].valor = 1;
            }

            if (y >= n2[i].ref) {
                y = y - n2[i].ref;
                n2[i].valor = 1;
            }
        }

        for (int i = 31; i >= 0; i--) {
            if (n1[i].valor == n2[i].valor) {
                n1[i].valor = 0;
            }
            else {
                n1[i].valor = 1;
            }
        }

        for (int i = 0; i < 32; i++) {
            if (n1[i].valor == 1) {
                soma = soma + n1[i].ref;
            }
        }

        cout << soma << endl;
    }
}
