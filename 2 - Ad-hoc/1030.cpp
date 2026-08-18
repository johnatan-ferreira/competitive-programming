#include <iostream>
#include <vector>
using namespace std;

int main() {
    typedef struct no {
        int valor;
        no *prev, *next;
    };

    int x, y, z;

    while (cin >> x) {
        int cont = 1;

        for (int i = 0; i < x; i++) {
            cin >> y >> z;

            vector<no *> v(y);

            for (int i = 0; i < y; i++) {
                v[i] = new no;
            }

            no *t = v[y - 1];

            for (int i = 0; i < y; i++) {
                if (i == y - 1) {
                    v[i]->next = v[0];
                    v[i]->prev = v[i - 1];
                } else if (i == 0) {
                    v[i]->next = v[i + 1];
                    v[i]->prev = v[y - 1];
                } else {
                    v[i]->next = v[i + 1];
                    v[i]->prev = v[i - 1];
                }

                v[i]->valor = i + 1;
            }

            while (t->next != t) {
                for (int i = 0; i < z; i++) {
                    t = t->next;
                }

                t->prev->next = t->next;
                t->next->prev = t->prev;
            }

            cout << "Case " << cont << ": " << t->valor << endl;
            cont++;
        }
    }
}
