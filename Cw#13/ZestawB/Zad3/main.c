#include <stdio.h>
#include <stdlib.h>

struct element{
    double x;
    struct element * next;
};

int porownaj(struct element *e1,struct element *e2){
    struct element *temp=e1;
    struct element *temp2=e2;
    while((temp->next!=NULL) &&(temp2->next!=NULL)){
        temp=temp->next;
        temp2=temp2->next;
        if(temp->x!=temp2->x)
            return 0;
    }
    free(temp);
    free(temp2);
    return 1;
}

int main()
{
    struct element *l=malloc(sizeof(struct element));
    l->next=malloc(sizeof(struct element));
    struct element *a=malloc(sizeof(struct element));
    a->x=1.0;
    a->next=malloc(sizeof(struct element));
    l->next=a;
    struct element *b=malloc(sizeof(struct element));
    b->x=2.0;
    b->next=malloc(sizeof(struct element));
    a->next=b;
    struct element *c=malloc(sizeof(struct element));
    c->x=3.0;
    c->next=NULL;
    b->next=c;

    struct element *l2=malloc(sizeof(struct element));
    l2->next=malloc(sizeof(struct element));
    struct element *a2=malloc(sizeof(struct element));
    a2->x=1.0;
    a2->next=malloc(sizeof(struct element));
    l2->next=a2;
    struct element *b2=malloc(sizeof(struct element));
    b2->x=2.0;
    b2->next=malloc(sizeof(struct element));
    a2->next=b2;
    struct element *c2=malloc(sizeof(struct element));
    c2->x=3.0;
    c2->next=NULL;
    b2->next=c2;


    printf("%i\n",porownaj(l,l2));
    return 0;
}
