#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b, int *c);

int main()
{
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    zamiana(&a,&b,&c);
    return 0;
}

void zamiana(int *a, int *b, int *c){
    int temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
}
