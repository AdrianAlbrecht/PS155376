#include <stdio.h>
#include <stdlib.h>

void wytnij(char *n1, int n, int m);
void wytnij2(wchar_t *n1, int n, int m);
void wytnijzw(char *n1, char *n2);
void wytnijzw2(wchar_t *n1, wchar_t *n2);

int main()
{
    char n1[]="ABEACDEFGCH", n2[]="GCEA";
    wytnijzw(n1,n2);
    printf("%s\n",n1);
    wchar_t n3[]=L"Ala ma kota", n4[]=L"mao";
    wytnijzw2(n3,n4);
    wprintf(L"%s\n",n3);
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
void wytnijzw(char *n1, char *n2){
    int i,j;
    for(i=0;*(n2+i)!=0;i++){
        for(j=0;*(n1+j)!=0;j++){
            if(*(n1+j)==*(n2+i))
                wytnij(n1,j,j);
        }
    }
}
void wytnijzw2(wchar_t *n1, wchar_t *n2){
    int i,j;
    for(i=0;*(n2+i)!=0;i++){
        for(j=0;*(n1+j)!=0;j++){
            if(*(n1+j)==*(n2+i))
                wytnij2(n1,j,j);
        }
    }
}
