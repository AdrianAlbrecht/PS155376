#include <stdio.h>
#include <stdlib.h>

void dopisz(char *w, char *w2);

int main()
{
    char t[11]="Tomek";
    char k[]="kawoN";
    printf("%s\n",t);
    dopisz(t,k);
    printf("%s\n",t);
    return 0;
}

void dopisz(char *w, char *w2){
    int i=0, j=0;
    for(i=0;*(w+i)!=0;i++);
    for(j=0;*(w2+j)!=0;j++);
    //printf("%i %i\n",i,j);
    int l=0;
    for(int k=j-1;k>=0;k--){
        *(w+i+l)=*(w2+k);
        l++;
    }
    *(w+i+j)=0;
}
