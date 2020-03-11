#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ciag(int n);

int main()
{
    int n=7; //wartosc zmiennej to index wyrazu ciagu
    printf("%i", ciag(n));
    return 0;
}

int ciag(int n){
    if(n==0 || n==1 || n==2)
        return 1;
    else if(n%3==0)
        return ciag(n-1)+ciag(n-2);
    else if(n%3==1)
        return 5*ciag(n-1)+4;
    return ciag(n-1);
}
