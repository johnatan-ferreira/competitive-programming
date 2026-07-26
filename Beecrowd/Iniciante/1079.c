/**
* Problema: 1079 - Médias Ponderadas
* Link: https://judge.beecrowd.com/pt/problems/view/1079
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int x, y;
    double n1, n2, n3;
    
    scanf("%d", &x);
    
    for (y=0; y<x; y++){
        
        scanf("%lf%lf%lf", &n1, &n2, &n3);
        
        n1 = (((n1*2) + (n2*3) + (n3*5))/10);
        printf("%.1lf\n", n1);
        n1=0;
        n2=0;
        n3=0;
    }
    
    return 0;
}
