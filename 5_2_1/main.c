#include <stdio.h>
#include <stdlib.h>

void wyczysc(char napis[]);
void wyczysc2(wchar_t napis[]);
void wyczysc3(char *napis);


int main()
{
    char tekst[]="fdfsdfdsfds";
    printf("%s\n",tekst);
    wyczysc3(tekst);
    printf("%s\n",tekst);

    wchar_t tekst2[]=L"qwertysfsdfsd";
    wprintf(L"%s\n",tekst2);
    wyczysc2(tekst2);
    wprintf(L"%s\n",tekst2);
    return 0;
}

void wyczysc(char napis[]){
    napis[0]=NULL;
}

void wyczysc2(wchar_t napis[]){
    napis[0]=NULL;
}

void wyczysc3(char *napis){
    *napis=NULL;
}
