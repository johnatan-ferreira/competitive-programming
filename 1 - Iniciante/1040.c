/**
* Problema: 1040 - Media 3
* Link: https://judge.beecrowd.com/pt/problems/view/1040
* Descrição: Calculo de média com pesos
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    double n1, n2, n3, n4, media, n5;
    
    while(1){
        
        int x = scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
        
        if ((x != 4) || (n1<0) || (n1>10) || (n2<0) || (n2>10) || (n3<0) || (n3>10) || (n4<0) || (n4>10)){
            while(getchar() != '\n');
            continue;
        } else {
            break;
        }
    }
    
    media = (((n1*2) + (n2*3) + (n3*4) + (n4*1))/10);
    
    printf("Media: %.1lf\n", media);
    
    if ((media>=5) && (media<=6.9)){
        printf("Aluno em exame.\n");
        
        while(1){
            int y = scanf("%lf", &n5);
            
            if ((y != 1) || (n5<0) || (n5>10)){
                while(getchar() != '\n');
                continue;
            } else {
                break;
            }
        }
        
        printf("Nota do exame: %.1lf\n", n5);
        
        media = ((media + n5)/2);
        
        if (media>=5){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", media);
        
        return 0;
    }
    
    if (media>=7){
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}
