#include <stdio.h>
#include <stdlib.h>

// ** char void int int int tab n m fun ( ) , , , sciezka *

void fun(char *sciezka, int **tab, int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            *(sciezka+(i*(n-1))+j)=*(*(tab+i)+j);
        }
    }
    *(sciezka+(n*m))=0;
}

int main()
{
    char sciezka[20];
    *sciezka=0;
    int **tab=(int**)malloc(3*sizeof(int*));
    for(int i=0;i<3;i++){
        *(tab+i)=(int*)malloc(2*sizeof(int));
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            *(*(tab+i)+j)=120+j;
        }
    }
    *(*(tab)+1)=100;
    *(*(tab+2))=106;
    fun(sciezka,tab,3,2);
    printf("%s\n",sciezka);
    return 0;
}
