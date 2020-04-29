#include <stdio.h>
#include <stdlib.h>

void wypisz(char *napis);

int main()
{
    wypisz("jdsdjksjd");
    return 0;
}

void wypisz(char *napis){
    printf("%s\n",napis);
    puts(napis);
}
