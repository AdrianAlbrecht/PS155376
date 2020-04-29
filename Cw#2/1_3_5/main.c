#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,p;
    scanf("%f %f %f",&a,&b,&c);
    if(c==0){
        p=(a*b)/2;
    }
    else{
        float ob=a+b+c;
        //printf("%f\n",ob);
        ob/=2;
        //printf("%f\n",ob);
        p=sqrt(ob*(ob-a)*(ob-b)*(ob-c));
    }
    printf("Pole trojkata: %f", p);
    return 0;
}
