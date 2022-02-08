#include <stdio.h>
int main (int argc, char*argv[])
{
    int a, b,c, max = 0, min = 20000;
    do
    {
        printf("Inserisci a: \n");
        scanf("%d", & a);
        printf("Inserisci b: \n");
        scanf("%d", & b);
        printf("Inserisci c: \n");
        scanf("%d", & c);
        if(a<b && b<c){
            if(c>max)
            {
                max = c;
            } 
            if(a<min)
            {
                min = a
            }
        }
        else
            printf("Terna non valida.\n");
    }while(a>=0 && b>=0 && c>=0);
    printf("Il minimo è: %d", min);
    printf("Il massimo è: %d", max);
}
