#include <stdio.h>
#include <stdlib.h>

int n_do_1_3(unsigned int n);

int main()
{
    printf("%i\n", n_do_1_3(3));
    printf("%i\n", n_do_1_3(27));
    return 0;
}

int n_do_1_3(unsigned int n){
    int i=1;
    for(;i*i*i<n;i++);
    return i;
}
