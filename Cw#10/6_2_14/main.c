#include <stdio.h>
#include <stdlib.h>

int*** trojwymiar(int n, int m, int o);
int suma(int ***tab);


int main()
{
    int ***nowa_dyn=trojwymiar(100,100,100);
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++){
                *(*(*(nowa_dyn+i)+j)+k)=1;
            }
        }
    }
    *(*(*(nowa_dyn+1)+2))=69;
    printf("%i\n",suma(nowa_dyn));
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

int suma(int ***tab){
    int sum=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++){
                sum+=*(*(*(tab+i)+j)+k);
            }
        }
    }
    return sum;
}
