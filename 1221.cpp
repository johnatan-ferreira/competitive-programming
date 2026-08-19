//programa não concluído. lógica errada

#include <cmath>
#include <cstdint>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
    int n;

    uint64_t x;

    vector<int> tab = {2, 3, 5, 7};

    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> x;

            int flag = 0;

            for (int j = 0; j < tab.size(); j++) {
                if (x == tab[j]) {
                    flag = 0;
                    break;
                }

                int raiz = round(sqrt(x)); //"round" arredonda o resultado pro inteiro mais próximo

                if ((x == 1) || (x % tab[j] == 0) || (raiz * raiz == x)) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0) {
                cout << "Prime" << endl;
            } else {
                cout << "Not Prime" << endl;
            }
        }
    }
}
