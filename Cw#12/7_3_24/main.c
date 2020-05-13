#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

int suma_zg(struct element *Lista){
    if(Lista->next->next==NULL){
        return Lista->next->l;
    }
    return Lista->next->l+suma_zg(Lista->next);
}

int suma_bg(struct element *Lista){
    if(Lista->next==NULL){
        return Lista->l;
    }
    return Lista->l+suma_bg(Lista->next);
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
    printf("%i\n",suma_bg(&L1));


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
    printf("%i\n",suma_zg(&L5));
    return 0;
}
