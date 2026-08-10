/**
* Problema: 1050 - DDD
* Link: https://judge.beecrowd.com/pt/problems/view/1050
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int ddd;

	while(1) {

		int x = scanf("%d", &ddd);

		if (x != 1) {
			while(getchar() != '\n');
			continue;
		} else {
			break;
		}
	}

	if(ddd == 61) {
		printf("Brasilia\n");
		return 0;
	}
	
	if(ddd == 71) {
		printf("Salvador\n");
		return 0;
	}
	
	if(ddd == 11) {
		printf("Sao Paulo\n");
		return 0;
	}
	
	if(ddd == 21) {
		printf("Rio de Janeiro\n");
		return 0;
	}
	
	if(ddd == 32) {
		printf("Juiz de Fora\n");
		return 0;
	}
	
	if(ddd == 19) {
		printf("Campinas\n");
		return 0;
	}
	
	if(ddd == 27) {
		printf("Vitoria\n");
		return 0;
	}
	
	if(ddd == 31) {
		printf("Belo Horizonte\n");
		return 0;
	}
	
	printf("DDD nao cadastrado\n");

	return 0;
}
