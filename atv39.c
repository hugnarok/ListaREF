#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int codP;
    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codP);
    float valor;

    int quantidade;
    printf("\n Digite a quantidade do produto: ");
    scanf("%d", &quantidade);

    if (codP == 987)
    {
        codP = 1001;
    }
    
    switch (codP)
    {
    case 1001:
        valor = 5.32;
        valor = quantidade * valor;
        printf("valor= %f", valor);
        break;
    case 1324:
        valor = 6,45;
        valor = quantidade * valor;
        break;
    case 6548:
        valor = 2,37;
        valor = quantidade * valor;
        break;
    case 7623:
        valor = 6,45;
        valor = quantidade * valor;
        break;
    default:
        printf("entrada invalida");
        break;
    }   
    return 0;
}
