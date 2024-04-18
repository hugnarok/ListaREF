#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verificarLado(int x, int y, int z){
    if (x > y && x > z) {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }else if (z > x && z > y)
    {
        return z;
    }   
}

int verificaLadoB(int x, int y, int z){
    if (y > x && x > z)
    {
        return x;
    }else if (x > y && y > z)
    {
        return y;
    }else if (y > z && z > x)
    {
        return z;
    }
}

int verificaLadoC(int x, int y, int z){
    if (y > x && x < z){
        return x;
    }else if (x > y && y < z){
        return y;
    }else if (y > z && z < x){
        return z;
    }
}

//atividade do triangulo
float verificaTriangulo(int a, int b, int c){
    
}

int main(){
    int x, y, z;
    printf("\nDigite o lado: ");
    scanf("%d", &x);
    printf("\nDigite o lado: ");
    scanf("%d", &y);
    printf("\nDigite o lado: ");
    scanf("%d", &z);

    int a, b, c;
    a = verificarLado(x, y, z);
    b = verificaLadoB(x, y, z);
    c = verificaLadoC(x, y, z);

    printf("\n a : %d", a);    
    printf("\n b : %d", b);
    printf("\n c : %d", c);

    if (a > (b + c))
    {
        printf("\n não é possivel formar um triangulo");
    }else{
        //Verifica qual triangulo é
        if (a == b && a == c){
            printf("\n O triangulo de lado %d, %d e %d é equilatero\n", a, b, c);
        }else if (a == b || a == c || b == c)
        {
            printf("\n O triangulo de lado %d, %d e %d é isóceles\n", a, b, c);
            
            if(pow(a,2) == (pow(b, 2) + pow(c, 2))){
                printf("\n O triangulo de lado %d, %d e %d é retangulo\n", a, b, c);
            }else if(pow(a,2) > (pow(b, 2) + pow(c, 2))){
                printf("\n O triangulo de lado %d, %d e %d é obtusangulo\n", a, b, c);
            }else if (pow(a,2) < (pow(b, 2) + pow(c, 2))){
                printf("\n O triangulo de lado %d, %d e %d é acutangulo\n", a, b, c);
            }
        }else if (a != b && a != c && b != c)
        {
            printf("\n O triangulo de lado %d, %d e %d é escaleno\n", a, b, c);
            
            if(pow(a,2) == (pow(b, 2) + pow(c, 2))){
                printf("\n O triangulo de lado %d, %d e %d é retangulo\n", a, b, c);
            }else if(pow(a,2) > (pow(b, 2) + pow(c, 2))){
                printf("\n O triangulo de lado %d, %d e %d é obtusangulo\n", a, b, c);
            }else if (pow(a,2) < (pow(b, 2) + pow(c, 2))){
                printf("\n O triangulo de lado %d, %d e %d é acutangulo\n", a, b, c);
            }
        }
        
        
        
        
        
        
        
    }
    
    
    return 0;
}
