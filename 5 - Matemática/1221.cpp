#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    vector<uint64_t> tab = {2, 3};

    uint64_t x;

    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> x;

            int flag = 1;

            for (int j = 0; j < tab.size(); j++) {
                if (x == tab[j]) {
                    cout << "Prime" << endl;
                    flag = 0;
                    break;
                }
            }

            if (flag == 0) {
                continue;
            }

            flag = 0;

            for (int i = 0; i < tab.size(); i++) {
                if (x % tab[i] == 0) {
                    flag = 1;
                    break;
                }
            }

            for (int i = tab[tab.size() - 1]; i < x; i = i + 2) {
                if (x % i == 0) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0) {
                cout << "Prime" << endl;
                tab[tab.size()] = x;
            }
            else {
                cout << "Not Prime" << endl;
            }
        }
    }
}
