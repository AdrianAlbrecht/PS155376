#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

void dodaj(struct element* Lista, int a){
    struct element *wsk=malloc(sizeof(struct element));
    wsk->l=a;
    wsk->next=Lista->next;
    Lista->next=wsk;
}

void wypisz(struct element *Lista){
    if(Lista->next!=NULL){
        printf("%i ", Lista->next->l);
        wypisz(Lista->next);
    }
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
    L1.next=&L2;
    wypisz(&L1);
    dodaj(&L1,28);
    wypisz(&L1);
    return 0;
}
