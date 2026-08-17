#include <iostream>

using namespace std;

int main()
{
	int valor;

	do {

		valor=0;

		int x, y;

		cin >> x;
		cin >> y;

		if((x==0) || (y==0)) {

			valor=1;
		} else {

			char z[x][y];

			for(int i=0; i<x; i++) {

				for(int j=0; j<y; j++) {

					cin >> z[i][j];
				}
			}

			int flag;

			do {

				flag=0;

				for(int i=0; i<x; i++) {

					for(int j=0; j<y; j++) {

						if(z[i][j]=='T') {

							if(i!=0) {

								if(z[i-1][j]=='A') {

									z[i-1][j]='T';
									flag=1;
								}

							}

							if(j!=0) {

								if(z[i][j-1]=='A') {

									z[i][j-1]='T';
									flag=1;
								}

							}

							if(i!=x-1) {

								if(z[i+1][j]=='A') {

									z[i+1][j]='T';
									flag=1;
								}

							}

							if(j!=y-1) {

								if(z[i][j+1]=='A') {

									z[i][j+1]='T';
									flag=1;
								}
							}
						}
					}
				}
			} while (flag==1);

			for(int i=0; i<x; i++) {

				for(int j=0; j<y; j++) {

					cout << z[i][j];

					if(j==y-1) {

						cout << '\n';
					}
				}
			}

			cout << '\n';
		}
	} while (valor==0);
}
