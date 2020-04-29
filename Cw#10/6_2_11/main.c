#include <stdio.h>
#include <stdlib.h>

int** dwuwymiar(int n, int m);
int suma(int **tab, int n);


int main()
{
    int **nowa_dyn=dwuwymiar(3,100);
    //printf("%d\n",sizeof(nowa_dyn));
    for(int i=0;i<4;i++){
        for(int j=0;j<100;j++){
            *(*(nowa_dyn+i)+j)=1;
        }
    }
    *(*(nowa_dyn+1)+2)=69;
    for(int i=0;i<4;i++){
            *(*(nowa_dyn+1)+2)=69;
        for(int j=0;j<3;j++){
            printf("[%d %d]=%d\n",i,j,*(*(nowa_dyn+i)+j));
        }
    }
    printf("%i",suma(nowa_dyn,3));
    return 0;
}


int** dwuwymiar(int n, int m){
    int **tab=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<m;i++){
        *(tab+i)=(int*)malloc(m*sizeof(int));
    }
    return tab;
}

int suma(int **tab, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<100;j++){
            sum+=*(*(tab+i)+j);
        }
    }
    return sum;
}
