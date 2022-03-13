#include <stdio.h>
#define DIM 4
int main (int argc; char*argv[])
{
    int numeri[DIM];
    int n;
    int i;
    for(i=0; i < DIM; i++)
    {
        printf("Inserisci numero:\n");
        scanf("%d", & numeri[i]);
    }
    printf("L'array ha questi numeri:\n");
    for(i=0; i < DIM; i++){
        printf("%d\n", numeri[i]);
    }
}