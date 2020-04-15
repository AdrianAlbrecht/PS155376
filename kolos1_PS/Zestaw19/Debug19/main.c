#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a+*b;
}

int main()
{
    int tab[8] = {0,2,-2,5,0,9,8,1};
    int *wsk=tab-2;
    int b = *(wsk+=3); //b=2
    int c = b+2; // b=2  , c=4
    int d = foo(&c,&b); // b=2  , c=4  , d=6
    int e = (wsk+=-2)[-1]; // b=2  , c=4  , d=6  , e=4
    e = (d *= 4) + (c /= 2); // b=2  , c= 2 , d=24  , e=26
    c = d**wsk - (b+=2); // b=4  , c= 44 , d=24  , e=26
    b = *wsk + e; // b=30  , c=44 , d= 24 , e=26
    return 0;
}
