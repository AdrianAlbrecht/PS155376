#include <stdio.h>
#include <stdlib.h>

/*
(r) Napisz funkcjê, która otrzymuje dwa argumenty: dodatni¹ liczbê ca³kowit¹ n oraz n-elementow¹ tablicê tab o elementach typu
const int i zwraca jako wartoœæ œredni¹ arytmetyczn¹ elementów
tablicy tab.
*/

double srednia(int n,const int tab[]);

int main()
{
    const int tab[6]={1,2,3,4,5,6};
    printf("%lf\n",srednia(6,tab));
    return 0;
}

double srednia(int n,const int tab[]){
    double s=0.0;
    for(int i=0;i<n;i++){
        s+=tab[i];
    }
    return s/=n;
}
