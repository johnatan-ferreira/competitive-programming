#include <iostream>

using namespace std;

int main() {

    int n, a=0, b=0, flag=0;

    cin >> n;

    for (int i=0; i<n; i++) {

        string x;

        cin >> x;

        for (int j=0; j<x.length(); j++) {

            if (x[j]=='<') {

                flag=1;
                a++;
            }

            if ((flag==1) && (x[j]=='>') && (b<a)) {

                b++;
            }
        }

        cout << b << endl;
        flag=0;
        a=0;
        b=0;
    }
}
