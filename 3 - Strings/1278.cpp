#include <algorithm>
#include <iostream>

using namespace std;

string corretor(string s[]) {
    // Remove múltiplos espaços internos deixando apenas um
    auto fim = unique(s->begin(), s->end(), [](char a, char b) {
        return a == ' ' && b == ' ';
    });
    s->erase(fim, s->end());

    // Remove o espaço caso o último caractere da string seja um espaço
    if (!s->empty() && s->back() == ' ') {
        s->pop_back();
    }

    return *s;
}

void imprimir(string s[], int tam, int n) {
    // Se o tamanho da string for menor que o maior tamanho, então ele concatena a diferença de tamanho
    // em espaços com a string
    for (int i = 0; i < n; i++) {
        if (s[i].size() < tam) {
            s[i] = string(tam - s[i].size(), ' ') + s[i];
        }

        cout << s[i] << endl;
    }
}

int main() {
    int n;

    while (cin >> n) {
        getchar();

        if (n == 0) {
            return 0;
        }

        int tam = 0;
        string s[n];

        for (int i = 0; i < n; i++) {
            getline(cin, s[i]);
        }

        corretor(s);

        for (int i = 0; i < n; i++) {
            if (s[i].size() > tam) {
                tam = s[i].size();
            }
        }

        imprimir(s, tam, n);
    }
}
