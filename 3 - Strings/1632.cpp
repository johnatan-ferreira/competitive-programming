#include <iostream>
#include <vector>

using namespace std;

int main() {

	int x;
	vector<char>c = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 's', 'S'};

	while(cin >> x) {

		string s;

		for(int i = 0; i < x; i++) {

			cin >> s;
			int cont = 1;
			for(int j = 0; j<s.size(); j++) {
				
				int flag = 0;
				
				for(int k=0; k<c.size(); k++) {
					if(s[j] == c[k]) {
						cont = cont * 3;
						flag = 1;
						break;
					}
				}

				if(flag == 1) {

					continue;
				}

				cont = cont * 2;
			}

			cout << cont << endl;
		}
	}
}
