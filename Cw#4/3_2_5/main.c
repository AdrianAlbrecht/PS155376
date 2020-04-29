#include <stdio.h>
#include <stdlib.h>

int suma(const int *a, const int *b);

int main()
{
    int x=6,y=3;
    printf("%i\n",suma(&x,&y));
    return 0;
}

int suma(const int *a, int *b){
    return *a+*b;
}
