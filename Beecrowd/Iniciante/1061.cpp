#include <iostream>

using namespace std;

int main() {

    string s1, s2;
    int n1, d1, d2, d3, n2, d4, d5, d6;
    char c1, c2, c3, c4;

    cin >> s1 >> n1;
    cin >> d1 >> c1 >> d2 >> c2 >> d3;
    cin >> s2 >> n2;
    cin >> d4 >> c3 >> d5 >> c4 >> d6;

    int dur1 = 86400 - ((d1*60*60) + (d2*60) + d3);
    int dur2 = (d4*60*60) + (d5*60) + d6;

    int total = ((n2-n1-1)*86400) + dur1 + dur2;

    int dia, hora, minuto, segundo;

    segundo = total%60;
    minuto = ((total - segundo)/60)%60;
    hora = (((total - ((minuto*60) + segundo))/60)/60)%24;
    dia = ((((total - ((hora*60*60) + (minuto*60) + segundo))/60)/60)/24);

    cout << dia << " dia(s)" << endl;
    cout << hora << " hora(s)" << endl;
    cout << minuto << " minuto(s)" << endl;
    cout << segundo << " segundo(s)" << endl;
}
