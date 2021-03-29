#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Altura: ");
    int l = get_int("Largura: ");

    // Está printando a altura
    for (int i = 0; i < a; i++)
    {
        // Está printando a largura
        for (int j = 0; j < l; j++)
        {
            printf("#");
        }
        // Sempre que acabar a linha, ele pula para a linha de baixo
        printf("\n");
    }
}
