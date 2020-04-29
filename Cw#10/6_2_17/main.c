#include <stdio.h>
#include <stdlib.h>

int** dwuwymiar(int n, int m);
float srednia(int **tab, int n, int m);


int main()
{
    int **nowa_dyn=dwuwymiar(3,4);
    printf("%d\n",sizeof(nowa_dyn));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            *(*(nowa_dyn+i)+j)=i+j;
        }
    }
    *(*(nowa_dyn+1)+2)=70;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("[%d %d]=%d\n",i,j,*(*(nowa_dyn+i)+j));
        }
    }
    printf("%f\n",srednia(nowa_dyn,3,4));
    return 0;
}


int** dwuwymiar(int n, int m){
    int **tab=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        *(tab+i)=(int*)malloc(m*sizeof(int));
    }
    return tab;
}

float srednia(int **tab, int n, int m){
    float sum=0;
    float sr=0.0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=*(*(tab+i)+j);
        }
        if(sr<(sum/m))
            sr=sum/m;
        sum=0;
    }
    return sr;
}
