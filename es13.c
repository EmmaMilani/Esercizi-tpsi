#include <stdio.h>
int main(int argc, char*argv[]) {
    int n;
    do{
    printf("Inserisci un numero: \n");
    scanf("%d", & n);
    }while(n<0);
    for(int i=-n; i<=n; i++){
        if(i>=-n || i<=n){
            printf("%d \n", i);
        };
    }
    return 0;
}