#include <stdio.h>
#include <stdlib.h>

void stworz(int tab[],int n);
void sortuj(int tab[],int n);

int main()
{
    int tab[5];
    stworz(tab,5);
    for(int i=0;i<5;i++){
        printf("%i ",*(tab+i));
    }
    printf("\n");
    sortuj(tab,5);
    for(int i=0;i<5;i++){
        printf("%i ",*(tab+i));
    }
    return 0;
}

void stworz(int tab[],int n){
    for(int i=0;i<n;i++){
        scanf("%i",(tab+i));
    }
}
void sortuj(int tab[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(*(tab+j)<*(tab+j+1)){
                temp=*(tab+j);
                *(tab+j)=*(tab+j+1);
                *(tab+j+1)=temp;
            }
        }
    }
}
