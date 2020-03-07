#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    //a
    int i=1;
    while(((abs(a)*(i*i))+(b*i)+(c-d))<=0){
        i++;
    }
    printf("a): %i\n",i);
    //b
    i=1;
    while(((5*(i*i))+(a*i)+(b-c))>=0){
        i++;
    }
    printf("b): %i\n",i);
    //c
    i=1;
    while(((5*(i*i))+(a*i)+(b-c))>0){
        i++;
    }
    printf("c): %i\n",i);
    return 0;
}
