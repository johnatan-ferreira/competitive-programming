/**
* Problema: 1019 - Conversão de Tempo
* Link: https://judge.beecrowd.com/pt/problems/view/1019
* Descrição: Exercício para converter segundos no formato hh:mm:ss
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int h, m, s;
    
    scanf("%d", &s);
    
    h = s/3600;
    m = (s-(h*3600))/60;
    s = (s - (h*3600) - (m*60));
    
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}
