#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%i %i",&n,&m);
    for(int i=1;i<=m;i++){
        printf("%i ",n*i);
    }
    return 0;
}
