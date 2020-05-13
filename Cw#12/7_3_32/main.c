#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

struct element* dodaj(struct element* Lista, struct element* Lista2){
    struct element* temp=Lista->next;
    struct element* temp2=Lista2->next;
    Lista->next=Lista2;
    Lista2->next=temp;
    if(Lista2->next!=NULL)
        dodaj(Lista2->next,temp2);
    free(temp);
    free(temp2);
    return Lista;
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
    struct element L7;
    L7.l=4;
    L7.next=NULL;
    struct element L3;
    L3.l=3;
    L3.next=&L7;
    struct element L2;
    L2.l=2;
    L2.next=&L3;
    struct element L1;
    L1.l=1;
    L1.next=&L2;
    wypisz(&L1);

    struct element L8;
    L8.l=9;
    L8.next=NULL;
    struct element L6;
    L6.l=8;
    L6.next=&L8;
    struct element L5;
    L5.l=7;
    L5.next=&L6;
    struct element L4;
    L4.l=6;
    L4.next=&L5;
    wypisz(&L4);

    wypisz(dodaj(&L1,&L4));
    return 0;
}
