#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double im;
    double re;
};

struct zespolone suma(struct zespolone a, struct zespolone b){
    struct zespolone sum;
    sum.re=a.re+b.re;
    sum.im=a.im+b.im;
    return sum;
}

int main()
{
    struct zespolone a;
    a.re=2;
    a.im=3;
    struct zespolone b;
    b.re=3;
    b.im=6;
    struct zespolone sumik=suma(a,b);
    printf("%lf+",sumik.re);
    printf("%lfi\n",sumik.im);
    return 0;
}
