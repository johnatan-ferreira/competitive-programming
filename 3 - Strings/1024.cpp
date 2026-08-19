#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    int x;
    string s;

    while (cin >> x) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ou getchar();
        for (int i = 0; i < x; i++) {
            getline(cin, s);

            for (int j = 0; j < s.length(); j++) {
                if ((s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122)) {
                    s[j] = s[j] + 3;
                }
            }

            reverse(s.begin(), s.end());

            int k = s.length() / 2;

            for (k; k < s.length(); k++) {
                s[k] = s[k] - 1;
            }

            cout << s << endl;
        }
    }
}
