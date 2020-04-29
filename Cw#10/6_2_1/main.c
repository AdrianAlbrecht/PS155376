#include <stdio.h>
#include <stdlib.h>

int** dwuwymiar(int n, int m);

int main()
{
    int **nowa_dyn=dwuwymiar(3,4);
    printf("%d\n",sizeof(nowa_dyn));
    *(*(nowa_dyn+1)+2)=69;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            printf("[%d %d]=%d\n",i,j,*(*(nowa_dyn+i)+j));
        }
    }
    return 0;
}


int** dwuwymiar(int n, int m){
    int **tab=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        *(tab+i)=(int*)malloc(m*sizeof(int));
    }
    return tab;
}
