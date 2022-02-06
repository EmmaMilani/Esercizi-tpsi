#include <stdio.h>
int main (int argc, char*argv[])
{
    int a, b,c, max, min;
    do
    {
        printf("Inserisci a: \n");
        scanf("%d", & a);
        printf("Inserisci b: \n");
        scanf("%d", & b);
        printf("Inserisci c: \n");
        scanf("%d", & c);
        if(a<b && b<c){
            if(a> b && a>c){
                max = a;
            } 
            else{
                if(a>b && a<c)
                    max = c;
                else{
                    if(a<b && b>c)
                        max=b;
                }
            }
        }
        else
            printf("Terna non valida.\n");
    }while(a>=0 && b>=0 && c>=0);
}