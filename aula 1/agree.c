#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    // Quando for comparação, tem que se usar apenas uma aspa
    if (c == 'y' || c == 'Y')
    {
        printf("You agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You do not agreed.\n");
    }
}