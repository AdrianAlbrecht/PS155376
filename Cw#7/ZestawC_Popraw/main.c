#include <stdio.h>
#include <stdlib.h>

int funkcja(int * const a, int * const b)
{
    *a=8;
    *b=7;
    *a=*b;

}

int main()
{
    int x=5;
    int y=8;
    funkcja(&x,&y);
    return 0;
}
