#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

void zeruj_zg(struct element *Lista){
    if(Lista->next!=NULL){
        Lista->next->l=0;
        zeruj_zg(Lista->next);
    }
}

struct element* zeruj_bg(struct element *Lista){
    Lista->l=0;
    if(Lista->next!=NULL){
        zeruj_bg(Lista->next);
    }
    return Lista;
}


void wypisz_bg(struct element *Lista){
    printf("%i ", Lista->l);
    if(Lista->next!=NULL)
        wypisz_bg(Lista->next);
    else
        printf("\n");
}
void wypisz_zg(struct element *Lista){
    if(Lista->next!=NULL){
        printf("%i ", Lista->next->l);
        wypisz_zg(Lista->next);
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
    L1.l=1;
    L1.next=&L2;
    wypisz_bg(&L1);
    wypisz_bg(zeruj_bg(&L1));


    struct element L8;
    L8.l=3;
    L8.next=NULL;
    struct element L7;
    L7.l=28;
    L7.next=&L8;
    struct element L6;
    L6.l=2;
    L6.next=&L7;
    struct element L5;
    L5.next=&L6;
    wypisz_zg(&L5);
    zeruj_zg(&L5);
    wypisz_zg(&L5);
    return 0;
}
