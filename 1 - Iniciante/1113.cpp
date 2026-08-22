#include <iostream>
using namespace std;

int main() {
    int n[2];

    while (cin >> n[0] >> n[1]) {
        if (n[0] > n[1]) {
            cout << "Decrescente" << endl;
        }

        if (n[0] < n[1]) {
            cout << "Crescente" << endl;
        }

        if (n[0] == n[1]) {
            return 0;
        }
    }
}
