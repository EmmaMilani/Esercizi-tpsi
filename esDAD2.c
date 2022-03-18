#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc; char* argv[]){
    int gg, mm, aa, i, lungh=0, data;
    lungh = lungh + strlen(argv[1]);
    lungh = lungh + (argc-2);
    if (strlen(argv[1])!=lungh)
    {
        printf("Stringa non valida.");
    }else{
        data = atoi(argv[1]);
        gg = data / 1000000;
        mm = (data / 10000) - (gg * 100);
        aa = data % 10000;
        if(gg>=1 && gg<=31 && mm>=1 && mm<=12 && aa<2022){
            printf("La data è: %d / %d / %d .", gg, mm, aa);
        }
    }
}