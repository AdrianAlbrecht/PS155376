#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[]);
int dlugosc2(wchar_t napis[]);
int porownaj(char napis[], char napis2[]);
int porownaj2(wchar_t napis[], wchar_t napis2[]);

int main()
{
    char a[]="kajak";
    char b[]="kajak";
    printf("%i\n",porownaj(a,b));
    wchar_t c[]=L"kajak",d[]=L"kaiak";
    printf("%i\n",porownaj2(c,d));
    return 0;
}

int porownaj(char napis[], char napis2[]){
    int dl1=dlugosc(napis);
    int dl2=dlugosc(napis2);
    if(dl1!=dl2)
        return 0;
    for(int i=0;i<dl1;i++){
        if(*(napis+i)!=*(napis2+i))
            return 0;
    }
    return 1;
}

int porownaj2(wchar_t napis[], wchar_t napis2[]){
    int dl1=dlugosc2(napis);
    int dl2=dlugosc2(napis2);
    if(dl1!=dl2)
        return 0;
    for(int i=0;i<dl1;i++){
        if(*(napis+i)!=*(napis2+i))
            return 0;
    }
    return 1;
}
int dlugosc(char napis[]){
    int i=0;
    for(i=0;napis[i]!=0;i++);
    return i;
}
int dlugosc2(wchar_t napis[]){
    int i=0;
    for(i=0;napis[i]!=0;i++);
    return i;
}
