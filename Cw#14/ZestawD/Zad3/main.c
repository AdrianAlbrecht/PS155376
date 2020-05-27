#include <stdio.h>
#include <stdlib.h>


struct element{
    char z;
    struct element * next;
};

int porownaj(struct element *l1, struct element *l2){
    struct element *wsk=l1;
    struct element *wsk2=l2;
    while(wsk->next!=NULL && wsk2->next!=NULL){
        if(wsk->z!=wsk2->z){
            free(wsk);
            free(wsk2);
            return 0;
        }
        wsk=wsk->next;
        wsk2=wsk2->next;
    }
    if(wsk->next!=NULL || wsk2->next!=NULL){
        free(wsk);
        free(wsk2);
        return 0;
    }
    free(wsk);
    free(wsk2);
    return 1;
}

int main()
{
    struct element *l1=malloc(sizeof(struct element));
    l1->z='A';
    l1->next=malloc(sizeof(struct element));
    l1->next->z='B';
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->z='C';
    l1->next->next->next=NULL;


    struct element *l2=malloc(sizeof(struct element));
    l2->z='A';
    l2->next=malloc(sizeof(struct element));
    l2->next->z='B';
    l2->next->next=malloc(sizeof(struct element));
    l2->next->next->z='C';
    l2->next->next->next=NULL;

    printf("%i\n",porownaj(l1,l2));

    return 0;
}
