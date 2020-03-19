#include <stdio.h>
#include <stdlib.h>

void wartosc(int n, int *w);

int main()
{
    int x=0;
    wartosc(8,&x);
    printf("%i\n",x);
    return 0;
}

void wartosc(int n, int *w){
    *w=n;
}
