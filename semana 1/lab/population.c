#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start = 0;
    int end = 0;
    int cont = 0;
    
    while (start < 9)
    {
        start = get_int("Starting size: ");
    }
    
    while (end < start)
    {
        end = get_int("End size: ");
    }
    
    int final = start;
    
    while (final < end)
    {
        int gain = final / 3;
        int loss = final / 4;
        int born = gain - loss;
        final += born;
        cont++;
    }
    if (start == end)
    {
        cont = 0;
    }
    
    printf("Years: %i", cont);
}
