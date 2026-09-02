#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> val{2, 3, 5, 7};

    int i;

    while (cin >> i) {
        int mat[i][4];
        int n1, n2, d1, d2;
        char c1, c2, c3;

        for (int j = 0; j < i; j++) {
            cin >> n1 >> c1 >> d1 >> c2 >> n2 >> c3 >> d2;

            switch (c2) {
                case '+':
                    n1 = (n1 * d2) + (n2 * d1);
                    d1 = d1 * d2;
                    break;

                case '-':
                    n1 = (n1 * d2) - (n2 * d1);
                    d1 = d1 * d2;
                    break;

                case '*':
                    n1 = n1 * n2;
                    d1 = d1 * d2;
                    break;

                case '/':
                    n1 = n1 * d2;
                    d1 = d1 * n2;
                    break;
            }

            mat[j][0] = n1;
            mat[j][1] = d1;
            mat[j][2] = n1;
            mat[j][3] = d1;

            if (mat[j][0] == mat[j][1]) {

                mat[j][2] = 1;
                mat[j][3] = 1;
            }

            for (int k = 0; k < val.size(); k++) {
                if (((mat[j][2] % val[k]) == 0) && ((mat[j][3] % val[k]) == 0)) {
                    mat[j][2] /= val[k];
                    mat[j][3] /= val[k];
                    k = -1;
                }
            }
        }

        for (int j = 0; j < i; j++) {
            cout << mat[j][0] << "/" << mat[j][1] << " = " << mat[j][2] << "/" << mat[j][3] << endl;
        }
    }
}
