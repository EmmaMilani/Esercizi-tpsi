#include <stdio.h>
int main(int argc, char*argv[]){
        int n1;
        int n2;
        do{
                printf("Inserisci n1:\n");
                scanf("%d", & n1);
                printf("Inserisci n2:\n");
                scanf("%d", & n2);
                if(n2<n1){
                        printf("n1 deve essere minore di n2");
                };
        }while(n1<0 || n2<0 || n2<n1);
        for(int i=n1; i<=n2;i++){
                if(i>=n1 && i<=n2){
                        printf("%d \n", i);
                }
        }
        return 0;
}