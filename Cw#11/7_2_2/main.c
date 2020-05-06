#include <stdio.h>
#include <stdlib.h>

struct trojkat{
    float a;
    float b;
    float c;
};

void przypisz(struct trojkat troj1, struct trojkat *troj2){
    *troj2=troj1;
}

int main()
{
    struct trojkat t;
    t.a=3.2;
    t.b=6.3;
    t.c=9.2;
    struct trojkat t2;
    przypisz(t,&t2);
    printf("%f\n",t2.a);
    printf("%f\n",t2.b);
    printf("%f\n",t2.c);
    return 0;
}
