#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Pegando os inputs do usuário
    float resp = -1;
    while (resp < 0)
    {
        resp = get_float("Troco desejado: ");
    }
    
    // Contador
    int cont = 0;
    int dollars = 0;

   do
   {
       // Passamos para outra variável que é 'int' para não termos problema com a falta de precisão que o C tem
       dollars = round(resp * 100);

        // Enquanto for possível, a gente tira 25. Por assim em diante
       while (dollars >= 25)
       {
           dollars -= 25;
           cont += 1;
       }

       while (dollars >= 10)
       {
           dollars -= 10;
           cont += 1;
       }
       while (dollars >= 5)
       {
           dollars -= 5;
           cont += 1;
       }
       while (dollars >= 1)
       {
           dollars -= 1;
           cont += 1;
       }


       printf("%i\n", cont);
   }
   while (dollars > 0);
}
