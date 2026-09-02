#include <iostream>

using namespace std;

typedef struct no {

    int n;

    struct no *ante;
    struct no *prox;
} no;

int main() {

    while (true) {

        int x;
        cin >> x;

        if (x==0) {

            break;
        }

        struct no n1[50];
        int n2[50], cont=0;

        struct no *inicio = &n1[0];

        for (int i=0;i<50;i++) {

            n1[i].n=i+1;
            n2[i] = 0;

            if (i==0) {

                n1[i].ante=&n1[49];
            } else {

                n1[i].ante=&n1[i-1];
            }

            if (i==49) {

                n1[i].prox=&n1[0];
            } else {

                n1[i].prox=&n1[i+1];
            }
        }

        n1[x-1].prox=&n1[0];
        n1[0].ante=&n1[x-1];

        while ((inicio->ante != inicio) && (inicio->prox != inicio)) {

            struct no *aux = inicio->prox->prox;

            inicio->ante->prox = inicio->prox;
            inicio->prox->ante = inicio->ante;
            n2[cont] = inicio->n;
            inicio = aux;
            cont++;
        }

        cout << "Discarded cards: ";
        for (int i=0; i<cont-1; i++) {

            if (i==cont-2) {

                cout << n2[i] << endl;
            } else {

                cout << n2[i] << ", ";
            }
        }

        cout << "Remaining card: " << inicio->n << endl;
    }
}
