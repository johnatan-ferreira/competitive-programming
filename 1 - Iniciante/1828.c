/**
* Problema: 1828 - Bazinga!
* Link: https://judge.beecrowd.com/pt/problems/view/1828
* Linguagem: C
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int x, i;
    char sheldon[8], raj[8];
    
    scanf("%d", &x);
    
    for (i=1; i<=x; i++){
        
        scanf("%s%s", sheldon, raj);
        
        if (strcmp(sheldon, raj) == 0){
            printf("Caso #%d: De novo!\n", i);
            continue;
        }
        
        if (
            ((strcmp(sheldon, "pedra") == 0) && ((strcmp(raj, "tesoura") == 0) || (strcmp(raj, "lagarto") == 0))) ||
            ((strcmp(sheldon, "papel") == 0) && ((strcmp(raj, "pedra") == 0) || (strcmp(raj, "Spock") == 0))) ||
            ((strcmp(sheldon, "tesoura") == 0) && ((strcmp(raj, "papel") == 0) || (strcmp(raj, "lagarto") == 0))) ||
            ((strcmp(sheldon, "lagarto") == 0) && ((strcmp(raj, "papel") == 0) || (strcmp(raj, "Spock") == 0))) ||
            ((strcmp(sheldon, "Spock") == 0) && ((strcmp(raj, "pedra") == 0) || (strcmp(raj, "tesoura") == 0)))
            ){
            printf("Caso #%d: Bazinga!\n", i);
        } else {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    return 0;
}
