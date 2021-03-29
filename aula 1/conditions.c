#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pegando o valor de x e y
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    // Comparando-os
    if(x > y)
    {
        printf("x é maior que y\n"); 
    }
    else if(y > x)
    {
        printf("y é maior que x\n");
    }
    else
    {
        printf("x e y são iguais\n");
    }
}