#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    // Tem que colocar o float na frente das variáveis porque o 'c' consideraria uma número inteiro
    float z = (float) x / (float) y;
    
    printf("%f\n", z);
}