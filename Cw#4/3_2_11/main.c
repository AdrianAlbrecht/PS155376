#include <stdio.h>
#include <stdlib.h>

int* new_zm(unsigned int n);

int main()
{
    printf("%#010x\n",new_zm(8));
    return 0;
}

int* new_zm(unsigned int n){
    return malloc(n*sizeof(int));
}
