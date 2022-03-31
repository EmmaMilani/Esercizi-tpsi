#include <stdio.h>
#include <string.h>
int Ricerca(int argc, char*argv[], char numero[])
{
    for(int i=0; i < argc; i++)
    {
        if(strcmp(argv[i], numero)!=0)
        {
            return -1;
        }
        else
        {
            return i;
        }
    }
}
int main(int argc; char*argv[])
{
    char numero[4];
    printf("Inserisci il numero che vuoi cercare:\n");
    scanf("%s", numero);
    int pos = Ricerca(argc, argv, numero);
    if(pos != -1)
    {
        printf("Il numero che hai cercato è in posizione %d di argv.", pos);
    }
    else
    {
        printf("Il numero non è presente.");
    }
    return 0;
}