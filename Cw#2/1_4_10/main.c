#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,tmp=1;
    scanf("%i",&n);
    for(int i=1;i*i<=n;i++){
        tmp=i;
    }
    printf("%i",tmp);
    return 0;
}
