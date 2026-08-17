#include <bits/stdc++.h>
using namespace std;

struct Presente {

	int i, a, l, c;
};

int comparar(Presente a, Presente b) {

	int x = a.a * a.l * a.c;
	int y = b.a * b.l * b.c;
	
	if (x != y) return x > y;
	return a.i < b.i;
};

int comparar2(Presente a, Presente b) {

	return a.i < b.i;
};

void casos(int x) {

	int n, k;

	for(int o=0; o<x; o++) {

		scanf("%d%d", &n, &k);

		Presente presentes[n];

		for(int j=0; j<n; j++) {

			scanf("%d%d%d%d", &presentes[j].i, &presentes[j].a, &presentes[j].l, &presentes[j].c);
		}
		
		sort(presentes, presentes + n, comparar);
		
		Presente res[k];
		
		for(int i=0; i<k; i++){
		    
		    res[i] = presentes[i];
		}
		
		sort(res, res + k, comparar2);

		//Imprimir
		for(int q=0; q<k; q++) {

			if(q==(k-1)) {

				printf("%d\n", res[q].i);
			} else {

				printf("%d ", res[q].i);
			}
		}
	}
}

int main() {

	int x;

	scanf("%d", &x);

	casos(x);

	return 0;
}
