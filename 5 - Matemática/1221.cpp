#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    long long limit = sqrt(x);
    for (long long i = 3; i <= limit; i += 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n) {
        while (n--) {
            long long x;
            cin >> x;

            if (isPrime(x)) {
                cout << "Prime\n";
            }
            else {
                cout << "Not Prime\n";
            }
        }
    }

    return 0;
}
