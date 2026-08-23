#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string limparEspacos(string s) {
    stringstream ss(s); //coleta as palavras de uma string ignorando os espaços antes e depois delas
    string palavra, resultado = "";
    while (ss >> palavra) {
        //atribui a primeira palavra do ss na variável "palavra".
        if (resultado != "") {
            resultado += " ";
        }
        resultado += palavra;
    }
    return resultado;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    bool primeiroCaso = true;

    while (cin >> n && n != 0) {
        cin.ignore();

        vector<string> linhas(n);
        int maiorTamanho = 0;

        for (int i = 0; i < n; i++) {
            getline(cin, linhas[i]);
            linhas[i] = limparEspacos(linhas[i]);
            if ((int)linhas[i].size() > maiorTamanho) {
                maiorTamanho = linhas[i].size();
            }
        }

        if (!primeiroCaso) {
            cout << "\n";
        }
        primeiroCaso = false;

        for (int i = 0; i < n; i++) {
            int espacos = maiorTamanho - linhas[i].size();
            for (int e = 0; e < espacos; e++) {
                cout << " ";
            }
            cout << linhas[i] << "\n";
        }
    }
}
