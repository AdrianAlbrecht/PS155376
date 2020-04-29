#include <stdio.h>
#include <stdlib.h>

/*
 Napisz funkcjê, która otrzymuje cztery argumenty: dodatni¹ liczbê
ca³kowit¹ n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o elementach typu int
i zamienia zawartoœci komórek otrzymanych w argumentach tablic w nastêpuj¹cy sposób:

a) dla dowolnego i komórka tab1[i] powinna zawieraæ najwiêksz¹
spoœród pierwotnych wartoœci komórek tab1[i], tab2[i]
oraz tab3[i],

b) dla dowolnego i komórka tab2[i] powinna zawieraæ drug¹
co do wielkoœci spoœród pierwotnych wartoœci komórek tab1[i],
tab2[i] oraz tab3[i],

c) dla dowolnego i komórka tab3[i] powinna zawieraæ najmniejsz¹
spoœród pierwotnych wartoœci komórek tab1[i], tab2[i]
oraz tab3[i].
*/
void wypisz(unsigned int n, int *tab);
void a(unsigned int n, int *tab1, int *tab2, int *tab3);
void b(unsigned int n, int *tab1, int *tab2, int *tab3);
void c(unsigned int n, int *tab1, int *tab2, int *tab3);

int main()
{
    int tab1[4]={1,9,20,3},tab2[4]={2,10,18,1},tab3[4]={3,8,19,2};
    wypisz(4,tab1);
    wypisz(4,tab2);
    wypisz(4,tab3);
    a(4,tab1,tab2,tab3);
    wypisz(4,tab1);
    *(tab1)=1;*(tab1+1)=9;*(tab1+2)=20;*(tab1+3)=3;
    b(4,tab1,tab2,tab3);
    wypisz(4,tab2);
    *(tab2)=2;*(tab2+1)=10;*(tab2+2)=18;*(tab2+3)=1;
    c(4,tab1,tab2,tab3);
    wypisz(4,tab3);

    return 0;
}

void a(unsigned int n, int *tab1, int *tab2, int *tab3){
    int max;
    for(int i=0;i<n;i++){
        max=*(tab1+i);
        if(max<*(tab2+i))
            max=*(tab2+i);
        if(max<*(tab3+i)){
            max=*(tab3+i);
        }
        *(tab1+i)=max;
    }
}
void b(unsigned int n, int *tab1, int *tab2, int *tab3){
    int mid;
    for(int i=0;i<n;i++){
        mid=*(tab1+i);
        if((mid<*(tab2+i)&&*(tab2+i)<*(tab3+i))||(mid>*(tab2+i)&&*(tab2+i)>*(tab3+i)))
            mid=*(tab2+i);
        if((mid<*(tab3+i)&&*(tab3+i)<*(tab2+i))||(mid>*(tab3+i)&&*(tab3+i)>*(tab2+i)))
            mid=*(tab3+i);
        *(tab2+i)=mid;
    }
}
void c(unsigned int n, int *tab1, int *tab2, int *tab3){
    int min;
    for(int i=0;i<n;i++){
        min=*(tab1+i);
        if(min>*(tab2+i))
            min=*(tab2+i);
        if(min>*(tab3+i)){
            min=*(tab3+i);
        }
        *(tab3+i)=min;
    }
}
void wypisz(unsigned int n, int *tab){
    for(int i=0;i<n;i++){
        printf("%i ",*(tab+i));
    }
    printf("\n");
}
