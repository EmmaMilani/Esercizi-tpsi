//esercizio fatto a scuola il 31/01/22
#include <stdio.h>
int main(int argc, char*argv[])
{
    int a,b,c, diff, contaPari = 0, contaDisp = 0, contaNull = 0;
    do
    {
        printf("Inserisci a: \n");
        scanf("%d", & a);
        printf("Inserisci b: \n");
        scanf("%d", & b);
        printf("Inserisci c: \n");
        scanf("%d", & c);
        diff = a-b;
        if(diff == 0)
        {
            contaNull++;
        }
        else 
        {
            if(diff % 2 == 0)
            {
                contaPari++;
            }
            else
            {
                contaDisp++;
            }
        }
    }while(a+b>=c)
    printf("I numeri pari sono: %d", contaPari);
    printf("I numeri dispari sono: %d", contaDisp);
    printf("I numeri nulli sono: %d", contaNull);

    return 0;
}