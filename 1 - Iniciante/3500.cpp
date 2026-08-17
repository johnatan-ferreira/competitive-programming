/**
* Problema: 3500 - Inversão de Número
* Link: https://judge.beecrowd.com/pt/problems/view/3500
* Linguagem: C++
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string x;

    cin >> x;

    reverse(x.begin(), x.end());

    cout << "Invertido = " << x << endl;
}
