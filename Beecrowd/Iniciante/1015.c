/**
* Problema: 1015 - Distância Entre Dois Pontos
* Link: https://judge.beecrowd.com/pt/problems/view/1015
* Descrição: Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, segundo a fórmula da distância.
* Linguagem: C
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2;
    
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    
    x1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    
    printf("%.4lf\n", x1);
    
    return 0;
}
