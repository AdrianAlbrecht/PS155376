#include <stdio.h>
#include <stdlib.h>

struct element{
    int l;
    struct element *next;
};

int nwb_zg(struct element *Lista){
    return nwb_bg(Lista->next);
}

int nwb_bg(struct element *Lista){
    int nwb=0, bt=0;
    struct element *temp=Lista;
    struct element *temp2;
    while(temp->next!=NULL){
        temp2=temp;
        do{
            if(temp2->next!=NULL)
                temp2=temp2->next;
            bt=abs(temp->l-temp2->l);
            if(bt>nwb)
                nwb=bt;
        }while(temp2->next!=NULL);
        temp=temp->next;
    }
    free(temp);
    free(temp2);
    return(nwb);
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
    L3.l=29;
    L3.next=NULL;
    struct element L2;
    L2.l=14;
    L2.next=&L3;
    struct element L1;
    L1.l=27;
    L1.next=&L2;
    wypisz_bg(&L1);
    printf("%i\n",nwb_bg(&L1));


    struct element L8;
    L8.l=2;
    L8.next=NULL;
    struct element L7;
    L7.l=28;
    L7.next=&L8;
    struct element L6;
    L6.l=3;
    L6.next=&L7;
    struct element L5;
    L5.next=&L6;
    wypisz_zg(&L5);
    printf("%i\n",nwb_zg(&L5));
    return 0;
}
