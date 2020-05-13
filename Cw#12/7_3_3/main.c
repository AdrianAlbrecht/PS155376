#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

struct element* dodaj(struct element* Lista, int a){
    struct element *wsk=malloc(sizeof(struct element));
    wsk->l=a;
    wsk->next=Lista;
    return wsk;
}

void wypisz(struct element *Lista){
    printf("%i ", Lista->l);
    if(Lista->next!=NULL)
        wypisz(Lista->next);
    else
        printf("\n");
}

int main()
{
    struct element L3;
    L3.l=3;
    L3.next=NULL;
    struct element L2;
    L2.l=2;
    L2.next=&L3;
    struct element L1;
    L1.l=1;
    L1.next=&L2;
    wypisz(&L1);
    wypisz(dodaj(&L1,28));
    return 0;
}
