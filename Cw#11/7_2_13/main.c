#include <stdio.h>
#include <stdlib.h>

struct figura{
    int n;
    float *wym;
};

float suma(struct figura f){
    float sum;
    for(int i=0;i<f.n;i++){
        sum+=f.wym[i];
    }
    return sum;
}

int main()
{
    struct figura szesciokat;
    szesciokat.n=6;
    szesciokat.wym=malloc(sizeof(float)*szesciokat.n);
    szesciokat.wym[0]=4;
    szesciokat.wym[1]=3;
    szesciokat.wym[2]=2;
    szesciokat.wym[3]=9;
    szesciokat.wym[4]=1;
    szesciokat.wym[5]=2;
    printf("%f\n",suma(szesciokat));
    return 0;
}
