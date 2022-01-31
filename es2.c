#include <stdio.h>
int main(int argc, char*argv[])
{
    int a, b, prodotto, sommaProd=0;
    do
    {
        printf("Inserisci a: \n");
        scanf("%d", & a);
        printf("Inserisci b: \n");
        scanf("%d", & b);
        prodotto = a*b;
        printf("Il prodotto è: %d", prodotto);
        sommaProd = sommaProd + prodotto;
    }while(a!= 0 || b!=0)
    printf("La somma è: %d", sommaProd);
    return 0;
}