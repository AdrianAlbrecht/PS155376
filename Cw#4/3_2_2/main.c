#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b);

int main()
{
    int x=6,y=3;
    //printf("%#010x\n%#010x\n",&x,&y);
    printf("%#010x\n",mniejsza(&x,&y));
    x=2;
    y=6;
    printf("%#010x\n",mniejsza(&x,&y));
    return 0;
}

int mniejsza(int *a, int *b){
    return (*a>*b) ? b : a;
}
