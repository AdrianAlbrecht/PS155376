#include <stdio.h>
#include <stdlib.h>

int rekur(int n, int m);

int main()
{
    printf("%i\n",rekur(0,4));
    printf("%i\n",rekur(2,2));
    printf("%i\n",rekur(5,2));
    return 0;
}

int rekur(int n, int m){
    if(m==0)
        return 2;
    if(n==0)
        return -1;
    return rekur(n-1,m)+rekur(n,m-1)+7;
}
