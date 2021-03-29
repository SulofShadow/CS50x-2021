#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Qual o seu nome: ");
    printf("Hello, %s!\n", name);
}