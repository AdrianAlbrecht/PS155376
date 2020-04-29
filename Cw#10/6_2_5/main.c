#include <stdio.h>
#include <stdlib.h>

int*** trojwymiar(int n, int m, int o);
void usun(int ***t,int n, int m, int o);

int main()
{
    int ***nowa_dyn=trojwymiar(3,4,2);
    printf("%d\n",sizeof(nowa_dyn));
    *(*(*(nowa_dyn+1)+2))=69;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<2;k++){
                printf("[%d %d %d]=%d\n",i,j,k,*(*(*(nowa_dyn+i)+j)+k));
            }
        }
    }
    usun(nowa_dyn,3,4,2);
    return 0;
}


int*** trojwymiar(int n, int m, int o){
    int ***tab=(int ***)malloc(n*sizeof(int**));
    for(int i=0;i<n;i++){
        *(tab+i)=(int **)malloc(m*sizeof(int*));
        for(int j=0;j<m;j++){
            *(*(tab+i)+j)=(int*)malloc(o*sizeof(int));
        }
    }
    return tab;
}
void usun(int ***t,int n, int m, int o){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            free(*(*(t+i)+j));
        }
    free(*(t+i));
    }
    free(t);
}
