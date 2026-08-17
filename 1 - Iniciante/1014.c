/**
* Problema: 1014 - Consumo
* Link: https://judge.beecrowd.com/pt/problems/view/1014
* Descrição: Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida e o total de combustível gasto.
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    double x, y;
    
    scanf("%lf%lf", &x, &y);
    
    x = x/y;
    
    printf("%.3lf km/l\n", x);
    
    return 0;
}
