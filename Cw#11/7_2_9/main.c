#include <stdio.h>
#include <stdlib.h>

//TODO: przypadki testowe

struct lista{
    int n;
    struct lista *p;
};

int main()
{
    struct lista l1, l2;
    l2.n=7;
    l2.p=&l1;
    printf("%p\n",&l1);
    printf("%p\n",&l2);
    printf("%i\n",l2.n);
    printf("%p\n",l2.p);
    return 0;
}
