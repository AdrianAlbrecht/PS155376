#include <stdio.h>
#include <stdlib.h>

void mieszanko(unsigned int n, float tab1[],float tab2[],float tab3[]);

int main()
{
    float tab1[5]={2,3,4,5,6}, tab2[5]={1,2,3,4,5},tab3[10];
    float tab4[6]={8,4,7,2,5,9}, tab5[6]={3,7,1,6,2,9},tab6[12];
    mieszanko(5,tab1,tab2,tab3);
    for(int i=0;i<10;i++){
         printf("%f ",*(tab3+i));
    }
     printf("\n");
    mieszanko(6,tab4,tab5,tab6);
    for(int i=0;i<12;i++){
         printf("%f ",*(tab6+i));
    }
    return 0;
}

void mieszanko(unsigned int n, float tab1[],float tab2[],float tab3[]){
    for(int i=0;i<n;i++){
        *(tab3+i)=*(tab2+i);
    }
    for(int i=0;i<n;i++){
        *(tab3+n+i)=(*(tab1+i)-*(tab2+i));
    }
}
