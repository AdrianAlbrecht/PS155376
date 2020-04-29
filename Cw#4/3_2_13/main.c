#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double jeden(int n);
double dwa(double (*fun)(int w),int x);

int main()
{
    int a=3;
    printf("%lf\n",dwa(&jeden,a));
    return 0;
}

double jeden(int n){
    return sqrt(n*n*n);
}
double dwa(double (*fun)(int w),int x){
    return jeden(x);
}
