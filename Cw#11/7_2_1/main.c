#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    float a;
    float b;
    float c;
};

float obwod(struct trojkat par){
    return par.a+par.b+par.c;
}

int main()
{
    struct trojkat t;
    t.a=3.2;
    t.b=6.3;
    t.c=9.2;
    printf("%f",obwod(t));
    return 0;
}
