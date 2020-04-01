#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Napisz funkcjê, która otrzymuje cztery argumenty: dodatni¹ liczbê
ca³kowit¹ n, n-elementowe tablice tab1 i tab2 oraz 2 · n-elementow¹
tablicê tab3 o elementach typu double.
a) Funkcja powinna przepisywaæ zawartoœæ tablic tab1 i tab2 do tablicy tab3 w taki sposób, ¿e na pocz¹tku tablicy tab3
powinny siê znaleŸæ elementy tablicy tab1, a po nich elementy tablicy tab2.
b) Funkcja powinna przepisywaæ zawartoœæ tablic tab1 i tab2 do tablicy tab3 w taki sposób, ¿e w komórkach tablicy tab3
o nieparzystych indeksach powinny siê znaleŸæ elementy tablicy tab1, a w komórkach tablicy tab3 o parzystych indeksach
elementy tablicy tab2
*/

void wypisz(unsigned int n, double *tab);
void a(unsigned int n, double *tab1, double *tab2, double *tab3);
void b(unsigned int n, double *tab1, double *tab2, double *tab3);

int main()
{
    double tab1[3]={1,2,3}, tab2[3]={6,7,8}, tab3[6];
    wypisz(3,tab1);
    wypisz(3,tab2);
    a(3,tab1,tab2,tab3);
    wypisz(6,tab3);
    b(3,tab1,tab2,tab3);
    wypisz(6,tab3);
    return 0;
}

void wypisz(unsigned int n, double *tab){
    for(int i=0;i<n;i++){
        printf("%lf ",*(tab+i));
    }
    printf("\n");
}
void a(unsigned int n, double *tab1, double *tab2, double *tab3){
    for(int i=0;i<n;i++){
        *(tab3+i)=*(tab1+i);
    }
    for(int i=0;i<n;i++){
        *(tab3+n+i)=*(tab2+i);
    }
}
void b(unsigned int n, double *tab1, double *tab2, double *tab3){
    int j=0,k=0;
    for(int i=0;i<2*n;i++){
        if(i%2==1){
            *(tab3+i)=*(tab1+j);
            j++;
        }
        else{
            *(tab3+i)=*(tab2+k);
            k++;
        }
    }
}
