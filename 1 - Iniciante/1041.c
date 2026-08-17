/**
* Problema: 1041 - Coordenadas de um Ponto
* Link: https://judge.beecrowd.com/pt/problems/view/1037
* Descrição: Dadas as coordenadas de um ponto, dizer em qual quadrande ele se encontra.
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    double x, y;
    int z;
    
    while(1){
        
        z = scanf("%lf%lf", &x,&y);
        
        if (z != 2){
            while(getchar() != '\n');
            continue;
        } else{
            break;
        }
    }
    
    if ((x>0) && (y>0)){
        printf("Q1\n");
    }
    
    if ((x<0) && (y>0)){
        printf("Q2\n");
    }
    
    if ((x<0) && (y<0)){
        printf("Q3\n");
    }
    
    if ((x>0) && (y<0)){
        printf("Q4\n");
    }
    
    if ((x==0) && (y!=0)){
        printf("Eixo Y\n");
    }
    
    if ((x!=0) && (y==0)){
        printf("Eixo X\n");
    }
    
    if ((x==0) && (y==0)){
        printf("Origem\n");
    }
    
    return 0;
}
