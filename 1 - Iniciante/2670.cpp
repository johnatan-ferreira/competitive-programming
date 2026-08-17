/**
* Problema: 2670 - Máquina de Café
* Link: https://judge.beecrowd.com/pt/problems/view/2670
* Linguagem: C++
*/

#include <algorithm>
#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;

    int x, y, z;

    x = 2*b + 4*c;
    y = 2*a + 2*c;
    z = 4*a + 2*b;

    int n[3];

    n[0] = x;
    n[1] = y;
    n[2] = z;

    sort(n , n + 3);

    cout << n[0] << endl;
}
