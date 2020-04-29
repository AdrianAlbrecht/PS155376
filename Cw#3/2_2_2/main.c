#include <stdio.h>
#include <stdlib.h>

int silnia(int n);

int main()
{
    int n=0;
    scanf("%i",&n);
    printf("%i!: %i",n,silnia(n));
    return 0;
}

int silnia(int n){
    if(n==1)
        return 1;
    return silnia(n-1)*n;
}
