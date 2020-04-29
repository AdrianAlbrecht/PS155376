#include <stdio.h>
#include <stdlib.h>

void sklej(char *n, char *n2, char *n3);
void sklej2(wchar_t *n, wchar_t *n2, wchar_t *n3);

int main()
{
    char n1[]="Ala m",n2[]="a kota",n3[20];
    sklej(&n1,&n2,&n3);
    printf("%s\n",n3);
    wchar_t n4[]=L"Ala m",n5[]=L"a kota",n6[34];
    sklej2(&n4,&n5,&n6);
    wprintf(L"%s\n",n6);
    return 0;
}

void sklej(char *n, char *n2, char *n3){
    int i,j;
    for(i=0;*(n+i)!=0;i++){
        *(n3+i)=*(n+i);
    }
    for(j=0;*(n2+j)!=0;j++){
        *(n3+j+i)=*(n2+j);
    }
    *(n3+j+i)=0;
}
void sklej2(wchar_t *n, wchar_t *n2, wchar_t *n3){
    int i,j;
    for(i=0;*(n+i)!=0;i++){
        *(n3+i)=*(n+i);
    }
    for(j=0;*(n2+j)!=0;j++){
        *(n3+j+i)=*(n2+j);
    }
    *(n3+j+i)=0;
}
