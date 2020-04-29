#include <stdio.h>
#include <stdlib.h>

/*
Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą n oraz n-elementową tablicę tab o elementach typu int i:

a) (r) odwraca kolejność elementów tablicy tab.

b) (r) przesuwa o jeden w lewo wszystkie elementy tablicy
(tak, żeby wartość elementu o indeksie n − 1 znalazła się w elemencie o indeksie n−2, wartość elementu o indeksie n−2 znalazła
się w elemencie o indeksie n − 3, zaś wartość elementu o indeksie
0 w elemencie o indeksie n − 1),

c) (r,!) przesuwa o jeden w prawo wszystkie elementy tablicy
(tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie
o indeksie 1, wartość elementu o indeksie 1 znalazła się w elemencie
o indeksie 2, zaś wartość elementu o indeksie n − 1 w elemencie
o indeksie 0),

d) (*,r,!) sortuje rosnąco elementy tablicy tab (porządkuje elementy
przechowywane w tablicy w taki sposób aby ciąg
tab[0], tab[1],. . . ,tab[n-1] był ciągiem niemalejącym),

e) sortuje malejąco elementy tablicy tab.
*/

void wypisz(unsigned int n, int *tab);
void a(unsigned int n, int *tab);
void b(unsigned int n, int *tab);
void c(unsigned int n, int *tab);
void d(unsigned int n, int *tab);
void e(unsigned int n, int *tab);

int main()
{
    int tab[6]={1,9,2,8,3,7};
    a(6,tab);
    wypisz(6,tab);
    b(6,tab);
    wypisz(6,tab);
    c(6,tab);
    wypisz(6,tab);
    d(6,tab);
    wypisz(6,tab);
    e(6,tab);
    wypisz(6,tab);
    return 0;
}

void wypisz(unsigned int n, int *tab){
    for(int i=0;i<n;i++){
        printf("%i ",*(tab+i));
    }
    printf("\n");
}
void a(unsigned int n, int *tab){
    int temp[n];
    for(int i=0;i<n;i++){
        *(temp+i)=*(tab+n-1-i);
    }
    for(int i=0;i<n;i++){
        *(tab+i)=*(temp+i);
    }
}
void b(unsigned int n, int *tab){
    int temp[n-1];
    for(int i=1;i<n;i++){
        *(temp+i-1)=*(tab+i);
    }
    *(tab+n-1)=*(tab);
    for(int i=0;i<n-1;i++){
        *(tab+i)=*(temp+i);
    }
}
void c(unsigned int n, int *tab){
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        *(temp+i)=*(tab+i);
    }
    *(tab)=*(tab+n-1);
    for(int i=0;i<n-1;i++){
        *(tab+i+1)=*(temp+i);
    }
}
void d(unsigned int n, int *tab){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(*(tab+j)>*(tab+j+1)){
                temp=*(tab+j);
                *(tab+j)=*(tab+j+1);
                *(tab+j+1)=temp;
            }
        }
    }
}
void e(unsigned int n, int *tab){
    int temp;
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
