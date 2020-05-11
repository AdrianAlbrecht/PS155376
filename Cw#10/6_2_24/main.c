#include <stdio.h>
#include <stdlib.h>

int** dwuwymiar(int n, int m);
void odwrot(int **tab, int n, int m);


int main()
{
    int **nowa_dyn=dwuwymiar(3,4);
    //printf("%d\n",sizeof(nowa_dyn));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            *(*(nowa_dyn+i)+j)=i+j;
        }
    }
    *(*(nowa_dyn+1)+2)=70;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",*(*(nowa_dyn+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    odwrot(nowa_dyn,3,4);
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",*(*(nowa_dyn+i)+j));
        }
        printf("\n");
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

void odwrot(int **tab, int n, int m){
    int tym[m];
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            *(tym+j)=*(*(tab+i)+j-1);
        }
        *tym=*(*(tab+i)+m-1);
        for(int j=0;j<m;j++){
            *(*(tab+i)+j)=*(tym+j);
        }
    }
}
