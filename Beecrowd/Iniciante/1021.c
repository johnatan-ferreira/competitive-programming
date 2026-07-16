/**
* Problema: 1021 - Notas e Moedas
* Link: https://judge.beecrowd.com/pt/problems/view/1021
* Descrição: Dado um valor em reais, separe-o em notas de 100, 50, 20, 10, 5, 2 e moedas de 1, 0.5, 0.25, 0.10, 0.05 e 0.01 centavos
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    double x, m6;
    int n1, n2, n3, n4, n5, n6, m1, m2, m3, m4, m5;
    
    scanf("%lf", &x);
    
    printf("NOTAS:\n");
    
    n1 = x/100;
    printf("%d nota(s) de R$ 100.00\n", n1);
    
    n2 = ((x-(n1*100))/50);
    printf("%d nota(s) de R$ 50.00\n", n2);
    
    n3 = ((x-(n1*100)-(n2*50))/20);
    printf("%d nota(s) de R$ 20.00\n", n3);
    
    n4 = ((x-(n1*100)-(n2*50)-(n3*20))/10);
    printf("%d nota(s) de R$ 10.00\n", n4);
    
    n5 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10))/5);
    printf("%d nota(s) de R$ 5.00\n", n5);
    
    n6 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10)-(n5*5))/2);
    printf("%d nota(s) de R$ 2.00\n", n6);
    
    printf("MOEDAS:\n");
    
    m1 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10)-(n5*5)-(n6*2))/1);
    printf("%d moeda(s) de R$ 1.00\n", m1);
    
    m2 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10)-(n5*5)-(n6*2)-(m1*1))/0.5);
    printf("%d moeda(s) de R$ 0.50\n", m2);
    
    m3 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10)-(n5*5)-(n6*2)-(m1*1)-(m2*0.5))/0.25);
    printf("%d moeda(s) de R$ 0.25\n", m3);
    
    m4 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10)-(n5*5)-(n6*2)-(m1*1)-(m2*0.5)-(m3*0.25))/0.1);
    printf("%d moeda(s) de R$ 0.10\n", m4);
    
    m5 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10)-(n5*5)-(n6*2)-(m1*1)-(m2*0.5)-(m3*0.25)-(m4*0.1))/0.05);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    
    m6 = ((x-(n1*100)-(n2*50)-(n3*20)-(n4*10)-(n5*5)-(n6*2)-(m1*1)-(m2*0.5)-(m3*0.25)-(m4*0.1)-(m5*0.05))/0.01);
    printf("%.0lf moeda(s) de R$ 0.01\n", m6);

    return 0;
}
