#include <stdio.h>
#include <stdlib.h>

enum polaczenie {NAWIAZANE, NIENAWIAZANE, W_TRAKCIE};

struct komputer{
    enum polaczenie stan_polaczenia;
    char *IP;
    char *wlasciciel;
};

void wypisz(struct komputer comp){
    printf("Stan polaczenia: ");
    switch(comp.stan_polaczenia){
        case 0:
            printf("polaczenie nawiazane\n");
            break;
        case 1:
            printf("polaczenie nienawiazane\n");
            break;
        case 2:
            printf("polaczenie w trakcie nawiazywania\n");
            break;
        default:
            printf("niezidentyfikowano\n");
    }
    printf("IP: %s\n",comp.IP);
    printf("Wlasciciel: %s\n",comp.wlasciciel);
    printf("\n");
}

int main()
{
    struct komputer PC1,PC2;
    PC1.stan_polaczenia=NIENAWIAZANE;
    PC1.IP="192.168.123.2";
    PC1.wlasciciel="Maciek";
    PC2.stan_polaczenia=2;
    PC2.IP="192.168.123.3";
    PC2.wlasciciel="Andrzej";
    wypisz(PC1);
    wypisz(PC2);
    PC1.stan_polaczenia=0;
    PC1.IP="192.168.123.7";
    PC1.wlasciciel="Waldemar";
    wypisz(PC1);
    return 0;
}
