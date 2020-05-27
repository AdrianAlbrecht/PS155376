#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mno(int n, int m, int tab[][m]){
    int mno=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0 && j%2==0)
                mno*=tab[i][j];
        }
    }
    return mno;
}

int main()
{
    int tab[3][4]={{2,2,2,4},{7,7,4,4},{1,9,-3,1}};
    printf("%i\n",mno(3,4,tab));
    return 0;
}
