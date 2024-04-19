//saldo do banco
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int saldo;
    printf("\n Digite o seu saldo medio: ");
    scanf(" %d", &saldo);

    float bonus = 0;

    if(saldo <= 200){
        printf("\n O seu bonus é de: %.2f\n", bonus);
    }else if (saldo >= 201 && saldo <= 400)
    {
        bonus += saldo * 1.2;
        printf("\n O seu bonus é de: %.2f\n", bonus);
    }else if (saldo >= 401 && saldo <= 600)
    {
        bonus += saldo * 1.3;
    }else if (saldo >= 601)
    {
        bonus += saldo * 1.4;
        printf("\n O seu bonus é de: %.2f\n", bonus);
    }
    
    
    

    return 0;
}
