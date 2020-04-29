#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Na wstêpie prosi³bym o pokazanie na nastêpnych zajêciach prostsz¹ wersjê tego zadania.

char* godzina(const int godzina,const int minuta,const int sekunda);
wchar_t* godzina2(const int godzina,const int minuta,const int sekunda);

int main()
{
    const int h=20,m=34,s=52;
    char *tim=godzina(h,m,s);
    printf("%s\n",tim);
    *tim=0;
    tim=godzina(h,m,s);
    printf("%s\n",tim);
    tim=godzina(h,m,s);
    printf("%s\n",tim);
    tim=godzina(h,m,s);
    printf("%s\n",tim);
    wchar_t *tim2=godzina2(h,m,s);
    tim2=godzina2(h,m,s);
    printf("%s\n",tim2);
    tim2=godzina2(h,m,s);
    printf("%s\n",tim2);
    tim2=godzina2(h,m,s);
    printf("%s\n",tim2);
    return 0;
}

char* godzina(const int godzina,const int minuta,const int sekunda){
    char *te=malloc(8*sizeof(char));
    char tempik[2]="";
    itoa(godzina,tempik,10);
    *te=0;
              //Pytanie moje dlaczego po instrukcji itoa (i dlaczego po TYLKO TEJ umieszczonej w tym miesjcu
              //a po kolejnych nie) (bez tej instukcji zerowania napisu)
              //te="s\\%username%\\Desktop\\C\\5_2_20\\bin\\Debug\\5_2_20.exe" czyli œcie¿ka do pliku w trybie Debug?

    strcat(te, tempik);
    strcat(te,":");
    *tempik=0;
    itoa(minuta,tempik,10);
    strcat(te,tempik);
    strcat(te,":");
    *tempik=0;
    itoa(sekunda,tempik,10);
    strcat(te,tempik);
    *tempik=0;
    return te;
}

wchar_t* godzina2(const int godzina,const int minuta,const int sekunda){
    wchar_t *te=malloc(8*sizeof(wchar_t));
    wchar_t tempik[2]=L"";
    itoa(godzina,tempik,10);
    *te=0;
    strcat(te, tempik);
    strcat(te,":");
    *tempik=0;
    itoa(minuta,tempik,10);
    strcat(te,tempik);
    strcat(te,":");
    *tempik=0;
    itoa(sekunda,tempik,10);
    strcat(te,tempik);
    *tempik=0;
    return te;
}
