#include <stdio.h>
#include <stdlib.h>

void przedzial(unsigned int m,unsigned  int n,unsigned  int k);

int main()
{
    przedzial(4,20,100);
    return 0;
}

void przedzial(unsigned int m,unsigned  int n,unsigned  int k){
    for(int i=n;i<k;i+=n){
        if(i>m)
            printf("%i ",i);
    }
}
