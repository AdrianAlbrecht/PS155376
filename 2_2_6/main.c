#include <stdio.h>
#include <stdlib.h>

int pow(int n, int m);

int main()
{
    int n=0,m=0;
    scanf("%i %i",&n,&m);
    printf("%i^%i= %i",n,m,pow(n,m));
    return 0;
}

int pow(int n, int m){
    if(m==0)
        return 1;
    return pow(n,m-1)*n;
}
