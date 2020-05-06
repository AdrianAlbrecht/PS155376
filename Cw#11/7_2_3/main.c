#include <stdio.h>
#include <stdlib.h>

struct punkt{
    float x;
    float y;
    float z;
};

float najm_odleglosc(struct punkt tab[], int n){
    float najmniejsza=sqrt(((tab[2].x-tab[1].x)*(tab[2].x-tab[1].x))+((tab[2].y-tab[1].y)*(tab[2].y-tab[1].y))+((tab[2].z-tab[1].z)*(tab[2].z-tab[1].z)));
    float temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        temp=sqrt(((tab[j].x-tab[i].x)*(tab[j].x-tab[i].x))+((tab[j].y-tab[i].y)*(tab[j].y-tab[i].y))+((tab[j].z-tab[i].z)*(tab[j].z-tab[i].z)));
        if(temp<najmniejsza)
            najmniejsza=temp;
        }
    }
    return najmniejsza;
}

int main()
{
    struct punkt tablica[6]={{1,2,1},{2,3,5},{0,0,0},{1,1,1},{3,4,5},{2,9,3}};
    printf("%f\n",najm_odleglosc(tablica,6));
    return 0;
}
