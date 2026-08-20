#include <iostream>

using namespace std;

int main() {

    int n;

    while (cin >> n) {

        getchar();

        if (n == 0) {

            return 0;
        }

        int tam=0;
        string s[n];

        for (int i = 0; i < n; i++) {

            getline(cin, s[i]);
            if (s[i].size() > tam) {

                tam = s[i].size();
            }
        }

        for (int i = 0; i < n; i++) {

            if (s[i].size() < tam) {

                s[i] = string(tam - s[i].size(), ' ') + s[i];
            }

            cout << s[i] << endl;
        }
    }
}