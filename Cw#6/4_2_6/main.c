#include <stdio.h>
#include <stdlib.h>

/*
Napisz funkcję, która otrzymuje trzy argumenty: dodatnią liczbę całkowitą n oraz dwie n-elementowe tablice tab1, tab2 o elementach
typu int i:
a) (r) przepisuje zawartość tablicy tab1 do tablicy tab2,
b) przepisuje zawartość tablicy tab1 do tablicy tab2 w odwrotnej
kolejności (czyli element tab1[0] ma zostać zapisany do komórki
tablicy tab2 o indeksie n − 1).
*/

void wypisz(unsigned int n, int tab[]);
void a(unsigned int n, int tab1[], int tab2[]);
void b(unsigned int n, int tab1[], int tab2[]);

int main()
{
    int tab1[6]={1,2,3,4,5,6},tab2[6]={9,8,7,6,5,4};
    wypisz(6,tab1);
    wypisz(6,tab2);
    a(6,tab1,tab2);
    wypisz(6,tab1);
    wypisz(6,tab2);
    b(6,tab1,tab2);
    wypisz(6,tab1);
    wypisz(6,tab2);
    return 0;
}

void wypisz(unsigned int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%i ",tab[i]);
    }
    printf("\n");
}

void a(unsigned int n, int tab1[], int tab2[]){
    for(int i=0;i<n;i++){
        tab2[i]=tab1[i];
    }
}
void b(unsigned int n, int tab1[], int tab2[]){
    for(int i=0;i<n;i++){
        tab2[i]=tab1[n-1-i];
    }
}
