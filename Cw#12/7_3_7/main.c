#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

struct element* usun(struct element* Lista, int a){
    if(Lista->l==a)
        return Lista->next;
    else{
        if(Lista->next==NULL)
            return Lista;
        }
    Lista->next=usun(Lista->next,a);
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
    wypisz(usun(&L1,1));
    struct element L4;
    L4.l=28;
    L4.next=NULL;
    wypisz(&L4);
    printf("%p\n",usun(&L4,28));
    return 0;
}
