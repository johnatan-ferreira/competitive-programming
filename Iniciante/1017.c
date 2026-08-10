/**
* Problema: 1017 - Gasto de Combustível
* Link: https://judge.beecrowd.com/pt/problems/view/1017
* Descrição: Dado o tempo e a velocidade média, calcular o gasto de combustível de um carro que faz 12km/L.
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int a, b;
    double c;
    
    scanf("%d%d", &a, &b);
    
    c = ((a*b)/12.0);
    
    printf("%.3lf\n", c);
    
    return 0;
}
