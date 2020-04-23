#include <stdio.h>
#include <stdlib.h>

void wytnij(char *n1, int n, int m);
void wytnij2(wchar_t *n1, int n, int m);

int main()
{
    char napis[]="wytTODOWYCIECIAnij";
    wytnij(napis,3,14);
    printf("%s\n",napis);
    wchar_t napis2[]=L"wytTODOWYCIECIAnij";
    wytnij2(napis2,3,14);
    wprintf(L"%s\n",napis2);
    return 0;
}

void wytnij(char *n1, int n, int m){
    int i,j;
    for(i=0,j=0;*(n1+i)!=0;i++){
        *(n1+j)=*(n1+i);
        if(i<n||i>m)
            j++;
    }
    *(n1+j)=0;
}

void wytnij2(wchar_t *n1, int n, int m){
    int i,j;
    for(i=0,j=0;*(n1+i)!=0;i++){
        *(n1+j)=*(n1+i);
        if(i<n||i>m)
            j++;
    }
    *(n1+j)=0;
}
