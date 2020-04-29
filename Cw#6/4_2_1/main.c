#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Napisz funkcjê, która otrzymuje dwa argumenty: nieujemn¹ liczbê ca³kowit¹ n oraz n-elementow¹ tablicê tab elementów typu int i:
a) (r) nadaje wartoœæ zero wszystkim elementom tablicy tab,
b) (r) zapisuje do kolejnych elementów tablicy wartoœci równe ich indeksom (do komórki o indeksie i funkcja ma zapisywaæ wartoœæ i),
c) podwaja wartoœæ wszystkich elementów w tablicy tab,
d) do wszystkich komórek tablicy tab wstawia wartoœci bezwzglêdne
ich pierwotnych wartoœci.
*/

void a(unsigned int n, int tab[]);
void b(unsigned int n, int tab[]);
void c(unsigned int n, int tab[]);
void d(unsigned int n, int tab[]);
void wypisz(unsigned int n, int tab[]);

int main()
{
    int tab[6]={1,2,3,4,5,6};
    a(6,tab);
    wypisz(6,tab);
    b(6,tab);
    wypisz(6,tab);
    c(6,tab);
    wypisz(6,tab);
    tab[3]=-tab[3];
    wypisz(6,tab);
    d(6,tab);
    wypisz(6,tab);
    return 0;
}

void a(unsigned int n, int tab[]){
    for(int i=0;i<n;i++){
        tab[i]=0;
    }
}
void b(unsigned int n, int tab[]){
    for(int i=0;i<n;i++){
        tab[i]=i;
    }
}
void c(unsigned int n, int tab[]){
    for(int i=0;i<n;i++){
        tab[i]*=2;
    }
}
void d(unsigned int n, int tab[]){
    for(int i=0;i<n;i++){
        tab[i]=abs(tab[i]);
    }
}
void wypisz(unsigned int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%i ",tab[i]);
    }
    printf("\n");
}
