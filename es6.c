#include <stdio.h>
int main(int argc, char*argv[])
{
    int a,b,c, contaVolte=0, sommaC=0;
    double media;
    do
    {
        printf("Inserisci a: \n");
        scanf("%d", & a);
        printf("Inserisci b: \n");
        scanf("%d", & b);
    }while(a<b);
    do
    {
        printf("Inserisci c: \n");
        scanf("%d", & c);
        if(c>a && c<b)
        {
            sommaC = sommaC + c;
            contaVolte++;
        }
    }while(c>a && c<b);
    media = (double)c/(double)contaVolte;
    printf("La media è: %f", media);
}