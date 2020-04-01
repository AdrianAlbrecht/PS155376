#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Napisz funkcj�, kt�ra otrzymuje dwa argumenty: nieujemn� liczb� ca�kowit� n oraz n-elementow� tablic� tab element�w typu int i:
a) (r) nadaje warto�� zero wszystkim elementom tablicy tab,
b) (r) zapisuje do kolejnych element�w tablicy warto�ci r�wne ich indeksom (do kom�rki o indeksie i funkcja ma zapisywa� warto�� i),
c) podwaja warto�� wszystkich element�w w tablicy tab,
d) do wszystkich kom�rek tablicy tab wstawia warto�ci bezwzgl�dne
ich pierwotnych warto�ci.
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
