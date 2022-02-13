#include <stdio.h>
int main(int argc, char*argv[]){
        int n;
        do{
        printf("Inserisci un valore:\n");
        scanf("%d", &n);
        }while(n<0);
        for(int i=0; i <n;i++){
                if(i%2!=0 || i==n){
                        printf("%d\n",i);
                }
        }
}