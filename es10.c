#include <stdio.h>
int main(int argc, char*argv[]){
        int n;
        printf("Inserisci un numero intero positivo: \n");
        scanf("%d", & n);
        printf("i numeri sono:\n");
        for(int i=0; i < n; i++){
                if(i%2 == 0){
                        printf("%d \n", i);
                }
        }
        return 0;
}