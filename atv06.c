#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x;
    printf("Digite um valor para x: ");
    scanf("%d", &x);

    int conta;
    conta = (x + 1) / (-2 * x + (3));

    if (conta >= 0)
    {
        printf("\ntrue\n");
    }else{
        printf("false");
    }
    
    return 0;
}
