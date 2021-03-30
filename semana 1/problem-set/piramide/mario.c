#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Pegamos a resposta do usuário, resposta entre 1 e 8
    int resp = 0;
    do
    {
        
        resp = get_int("Height: ");
    }
    while (resp < 1 || resp > 8);
    
    // Criamos um looping para que a 'hash' receba e a resposta e continue até chegar a 0
    for (int hash = resp ; hash > 0; hash--)
    {
        // Criarmos um outro looping para criarmos um espaço vazio no começo, onde tem que começar com um caractere a menos da resposta
        for (int dot = hash - 1; dot > 0; dot--)
        {
            printf(" ");
        }
        
        // Outro looping para colocarmos as hashtags em forma de pirâmide
        for (int j = resp; j > hash - 1; j--)
        {
            printf("#");
        }
        
        // Essa já é a parte more comfortable do exercício
        printf("  ");
        
        for (int j = resp; j > hash - 1; j--)
        {
            printf("#");
        }
        
        printf("\n");
    }
    
}