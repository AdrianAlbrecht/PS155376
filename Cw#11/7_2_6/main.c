#include <stdio.h>
#include <stdlib.h>

struct punktn{
    int n;
    float *tabn;
};

void przepisz(struct punktn tab[], struct punktn tab2[], int n){
    for(int i=0;i<n;i++){
        tab2[i].n=tab[i].n;
        tab2[i].tabn=malloc(tab[i].n*sizeof(float));
        for(int j=0;j<tab[i].n;j++){
            tab2[i].tabn[j]=tab[i].tabn[j];
        }
    }
}

void wypiszstr(struct punktn a){
    printf("%i\n",a.n);
    for(int i=0;i<a.n;i++){
        printf("%f ",a.tabn[i]);
    }
    printf("\n");
}

void wypisztab(struct punktn tab[], int n){
    for(int i=0;i<n;i++){
        wypiszstr(tab[i]);
    }
    printf("Koniec tablicy\n");
}

int main()
{
    struct punktn p1={.n=4};
    p1.tabn=malloc(sizeof(float)*p1.n);
    p1.tabn[0]=3.2;
    p1.tabn[1]=5.1;
    p1.tabn[2]=2.0;
    p1.tabn[3]=4.3;
    struct punktn p2={.n=4};
    p2.tabn=malloc(sizeof(float)*p2.n);
    p2.tabn[1]=3.2;
    p2.tabn[2]=5.1;
    p2.tabn[3]=2.0;
    p2.tabn[0]=4.3;
    struct punktn p3={.n=4};
    p3.tabn=malloc(sizeof(float)*p3.n);
    p3.tabn[2]=3.2;
    p3.tabn[3]=5.1;
    p3.tabn[0]=2.0;
    p3.tabn[1]=4.3;
    struct punktn p4={.n=4};
    p4.tabn=malloc(sizeof(float)*p4.n);
    p4.tabn[3]=3.2;
    p4.tabn[0]=5.1;
    p4.tabn[1]=2.0;
    p4.tabn[2]=4.3;
    struct punktn tab1[4]={p1,p2,p3,p4};
    struct punktn tab2[4]={p3,p2,p1,p4};
    /*struct punktn tab1[4]={{4},{4},{4},{4}};
    struct punktn tab2[4]={{4},{4},{4},{4}};*/
    wypisztab(tab1,4);
    wypisztab(tab2,4);
    przepisz(tab1,tab2,4);
    wypisztab(tab1,4);
    wypisztab(tab2,4);
    printf("\n");
    return 0;
}
