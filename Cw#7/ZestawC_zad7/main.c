#include <stdio.h>
#include <stdlib.h>

void stworz(double tab[],int n);
void sortuj(double tab[],int n);

int main()
{
    double tab[5];
    stworz(tab,5);
    for(int i=0;i<5;i++){
        printf("%lf ",*(tab+i));
    }
    printf("\n");
    sortuj(tab,5);
    for(int i=0;i<5;i++){
        printf("%lf ",*(tab+i));
    }
    return 0;
}

void stworz(double tab[],int n){
    for(int i=0;i<n;i++){
        scanf("%lf",(tab+i));
    }
}
void sortuj(double tab[],int n){
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
