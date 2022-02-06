#include <stdio.h>
#include <math.h>
int main (int argc, char*argv[])
{
        double somma =0, radice;
        int a;
        do
        {
                printf("Inserisci a: \n");
                scanf("%d", & a);
                if(a>=0)
                {
                        radice = sqrt(a);
                        somma = somma + radice;
                }
                printf("La somma delle radici è:%f", somma);
        }while(a>=0);
        printf("Il numero non permette di effettuare il calcolo");
}