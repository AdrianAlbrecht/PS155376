#include <stdio.h>
#include <stdlib.h>

void mnozenie(float **tab, float **tab2, float **tab3);

int main()
{
    float **tab=(int**)malloc(2*sizeof(float*));
    for(int i=0;i<2;i++){
        *(tab+i)=(float*)malloc(2*sizeof(float));
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            *(*(tab+i)+j)=i+j+5;
        }
    }

    float **tab2=(float**)malloc(2*sizeof(float*));
    for(int i=0;i<2;i++){
        *(tab2+i)=(float*)malloc(2*sizeof(float));
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            *(*(tab2+i)+j)=i+j+3;
        }
    }

    float **tab3=(float**)malloc(2*sizeof(float*));
    for(int i=0;i<2;i++){
        *(tab3+i)=(float*)malloc(2*sizeof(float));
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%lf ",*(*(tab+i)+j));
        }
    }
    printf("\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%lf ",*(*(tab2+i)+j));
        }
    }
    printf("\n");

    mnozenie(tab,tab2,tab3);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%lf ",*(*(tab3+i)+j));
        }
    }
    return 0;
}

void mnozenie(float **tab, float **tab2, float **tab3){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           *(*(tab3+i)+j)=*(*(tab+i)+j) * *(*(tab2+i)+j);
        }
    }
}
