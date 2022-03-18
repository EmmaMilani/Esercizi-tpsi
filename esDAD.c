#include <stdio.h>
#define DIM 10
int main (int argc; char* argv[]){
    int n, somma=0, numeri[DIM], i;
    double media;
    do{
        for(i=0; i <DIM; i++){
            printf("Inserisci un numero:\n");
            scanf("%d", &n);
        }
        somma = somma + n;
    }while(n!=0)
    media = (double)somma / (double)(DIM -1);
    printf("La media è: %f", media);
    printf("I numeri al contrario e maggiori della media sono:\n");
    for(i = (DIM - 1); i >=0; i--){
        if(numeri[i]>media){
            printf("%d\n", numeri[i]);
        }
    }
}