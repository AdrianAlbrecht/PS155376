#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rekur(unsigned int n);

int main()
{
    printf("%i\n",rekur(2));
    printf("%i\n",rekur(4));
    return 0;
}

int rekur(unsigned int n){
    if(n==0 || n==1)
        return 1;
    if(n%2==0)
        return rekur(n-2)+1;
    return 2*rekur(n-1)-1;
}
