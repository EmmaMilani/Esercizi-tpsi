#include <stdio.h>
int main(int argc, char*argv[])
{
    int num1, num2;
    double rapp;

    do
    {
        printf("Inserisci il primo numero:\n");
        scanf("%d", & num1); //uso %d perché num1 è un int
        printf("Inserisci il secondo numero:\n");
        scanf("%d", & num2);
        if(num1 < num2)
        {
            rapp = (double)num2 / (double)num1;
        }
        else
        {
            rapp = (double)num1 / (double)num2;
        }
        printf("Il risultato è: %f", rapp); //utilizzo %f perchè rapp è in double

    }while(a!= 0 && b!=0)
    
    return 0;
}