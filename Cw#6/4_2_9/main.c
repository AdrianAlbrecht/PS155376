#include <stdio.h>
#include <stdlib.h>

/*
 Napisz funkcj�, kt�ra otrzymuje cztery argumenty: dodatni� liczb�
ca�kowit� n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o elementach typu int
i zamienia zawarto�ci kom�rek otrzymanych w argumentach tablic w nast�puj�cy spos�b:

a) dla dowolnego i kom�rka tab1[i] powinna zawiera� najwi�ksz�
spo�r�d pierwotnych warto�ci kom�rek tab1[i], tab2[i]
oraz tab3[i],

b) dla dowolnego i kom�rka tab2[i] powinna zawiera� drug�
co do wielko�ci spo�r�d pierwotnych warto�ci kom�rek tab1[i],
tab2[i] oraz tab3[i],

c) dla dowolnego i kom�rka tab3[i] powinna zawiera� najmniejsz�
spo�r�d pierwotnych warto�ci kom�rek tab1[i], tab2[i]
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
