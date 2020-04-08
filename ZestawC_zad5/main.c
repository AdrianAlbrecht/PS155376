#include <stdio.h>
#include <stdlib.h>

int czy_r_nm(int tab[], int tab2[], int n);

int main()
{
    int tab[6]={5,3,7,2,6,1}, tab2[6]={9,2,4,6,2,1}, tab3[6]={7,5,3,6,3,2};
    printf("%i\n",czy_r_nm(tab,tab2,6));
    printf("%i\n",czy_r_nm(tab,tab3,6));
    return 0;
}

int czy_r_nm(int tab[], int tab2[], int n){
    int n_M_1=tab[0];
    int n_M_2=tab2[0];
    for(int i=1;i<n;i++){
        if(n_M_1>tab[i])
            n_M_1=tab[i];
        if(n_M_2>tab2[i])
            n_M_2=tab2[i];
    }
    if(n_M_1==n_M_2)
        return 1;
    return 0;
}
