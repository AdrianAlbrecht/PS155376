#include <stdio.h>
#include <stdlib.h>

int* new_zm();

int main()
{
    printf("%#010x\n",new_zm());
    return 0;
}

int* new_zm(){
    return malloc(sizeof(int));
}
