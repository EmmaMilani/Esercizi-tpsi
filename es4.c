#include <stdio.h>
#include <math.h>
int main(int argc, char*argv[])
{
    int a,b;
    double r;
    do
    {
        printf("Inserisci a: \n");
        scanf("%d", & a);
        printf("Inserisci b: \n");
        scanf("%d", & b);
        if(a>b)
        {
            r= (double)a / (double)b;
        }
        else
        {
            r= (double)b / (double)a;
        }

        if(r>0)
        {
            r = sqrt(r);
            printf("La radice quadrata del rapporto è: %f", r);
        }

    }while(r>0)
    printf("Non è possibile fare la radice del rapporto. \n");
    return 0;
}