#include <stdio.h>
#include <stdlib.h>

int euklides(int n, int m);

int main()
{
    printf("%i",euklides(340,500)); //dwie liczby wpisywane rêcznie
    return 0;
}

int euklides(int n, int m){
    if(n==m)
        return n;
    if(n>m)
        return euklides(m,n-m);
    return euklides(n,m-n);
}
