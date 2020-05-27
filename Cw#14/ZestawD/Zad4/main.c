#include <stdio.h>
#include <stdlib.h>

struct Wycieczka{
    char *kraj;
    int cena;
};

char* ntkraj(struct Wycieczka tab[], int n){
    int ntk=0;
    for(int i=0; i<n; i++){
        if(tab[i].cena<tab[ntk].cena)
            ntk=i;
    }
    return tab[ntk].kraj;
}

int main()
{
    struct Wycieczka w1= {.kraj="Grecja", .cena=3000};
    struct Wycieczka w2= {.kraj="Francja", .cena=1000};
    struct Wycieczka w3= {.kraj="Niemcy", .cena=2000};
    struct Wycieczka tablica[3]= {w1,w2,w3};
    printf("%s\n",ntkraj(tablica,3));
    return 0;
}
