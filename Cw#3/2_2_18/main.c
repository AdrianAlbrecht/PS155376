#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float pseudolosowe(int n);

int main()
{
    time_t tt;
    srand(time(&tt));
    pseudolosowe(5);
    //float n=rand()%100;
    //n/=100;
    //printf("%f\n",n);
    return 0;
}

float pseudolosowe(int n){
    if(n==1){
        float k=rand()%100;
        k/=100;
        printf("%f\n",k);
        return k;
    }
    float k=1+pow(pseudolosowe(n-1),2);
    printf("%f\n",k);
    return k;
}
