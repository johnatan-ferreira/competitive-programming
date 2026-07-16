/**
* Problema: 1020 - Idade em Dias
* Link: https://judge.beecrowd.com/pt/problems/view/1020
* Descrição: Dada sua idade em dias, converta-a em anos, meses e dias
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int a, m, d;
    
    scanf("%d", &d);
    
    a = d/365;
    m = (d-(a*365))/30;
    d = (d - (a*365) - (m*30));
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

    return 0;
}
