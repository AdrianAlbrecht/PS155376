#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

struct element* znajdzp(struct element* Lista, int a){
    if(Lista->next!=NULL){
        if(Lista->next->l==a)
            return Lista;
        else
            znajdzp(Lista->next,a);
    }
    else
        return Lista;
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
    struct element L4;
    L4.l=3;
    L4.next=NULL;
    struct element L3;
    L3.l=28;
    L3.next=&L4;
    struct element L2;
    L2.l=2;
    L2.next=&L3;
    struct element L1;
    L1.next=&L2;
    wypisz(&L1);
    printf("%i\n",znajdzp(&L1,3)->l);
    printf("%i\n",znajdzp(&L1,54543)->l);
    return 0;
}
