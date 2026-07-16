/**
* Problema: 1018 - Cédulas
* Link: https://judge.beecrowd.com/pt/problems/view/1018
* Descrição: Exercício que "fatora" um valor em reais de entrada em notas de 100, 50, 20, 10, 5, 2 e moedas de 1 real
* Linguagem: C
*/

#include <stdio.h>

int main()
{
    int a, cem, cinq, vinte, dez, cinco, dois, um;
    
    scanf("%d", &a);
    
    int b, c, d, e, f, g;
    
    cem = (a/100);
    b = cem*100;
    
    cinq = ((a - b) / 50);
    c = cinq*50;
    
    vinte = ((a-b-c) / 20);
    d = vinte*20;
    
    dez = ((a-b-c-d) / 10);
    e = dez*10;
    
    cinco = ((a-b-c-d-e) / 5);
    f = cinco*5;
    
    dois = ((a-b-c-d-e-f) / 2);
    g = dois*2;
    
    um = ((a-b-c-d-e-f-g) / 1);
    
    printf("%d\n", a);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    
    return 0;
}
