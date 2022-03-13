#include <stdio.h>
#define DIM 5
int main(int argc, char*argv[])
{
    int numeri[DIM];
    int i=0;
    for(i=0; i < DIM; i++){
        printf("Inserisci un numero:\n");
        scanf("%d", &numeri[i]);
    };
    printf("I numeri al contrario sono:\n");
    for(i=(DIM -1);i>=0 && i < DIM; i--){
        printf("%d", numeri[i]);
    }
    return 0;
}