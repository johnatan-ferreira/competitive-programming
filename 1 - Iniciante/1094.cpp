#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x, c = 0, r = 0, s = 0;

    cin >> x;

    int n[x];
    char m[x];

    for (int i = 0; i < x; i++) {
        cin >> n[i] >> m[i];

        if (m[i] == 'C') {
            c = c + n[i];
        }
        else if (m[i] == 'R') {
            r = r + n[i];
        }
        else if (m[i] == 'S') {
            s = s + n[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "Total: " << c + r + s << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << 100.0 * c / (c + r + s) << " %" << endl;
    cout << "Percentual de ratos: " << 100.0 * r / (c + r + s) << " %" << endl;
    cout << "Percentual de sapos: " << 100.0 * s / (c + r + s) << " %" << endl;
}
