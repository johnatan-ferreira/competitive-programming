#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    double pi = 3.1415;

    cin >> n >> m;

    m = m / ((4.0 / 3.0) * (pi * (pow(n, 3))));

    cout << m << endl;
}
