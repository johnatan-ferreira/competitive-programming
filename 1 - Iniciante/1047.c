/**
* Problema: 1047 - Tempo de Jogo com Minutos
* Link: https://judge.beecrowd.com/pt/problems/view/1047
* Linguagem: C
*/

#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, durac, hrs, mins;

	scanf("%d%d%d%d", &a, &b, &c, &d);

	e = ((c*60) + d);
	f = ((a*60) + b);
	durac = e - f;

	if (durac == 0) {
		durac = 1440;
	}
	
	if (durac <0){
	    durac = (1440 + durac);
	}

	hrs = durac/60;
	mins = durac%60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hrs, mins);

	return 0;
}
