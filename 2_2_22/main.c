#include <stdio.h>
#include <stdlib.h>

int ciag(int n);

int main()
{
    int n=5; //wartosc zmiennej to index wyrazu ciagu
    printf("%i", ciag(n));
    return 0;
}

int ciag(int n){
    if(n==0 || n==1)
        return 1;
    return ciag(n-1)+2*ciag(n-2)+3;
}
