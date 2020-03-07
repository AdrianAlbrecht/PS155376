#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=1;
    scanf("%i",&a);
    for(int i=2;i<=a;i+=2){
        if(i!=2) printf("*");
        printf("%i",i);
        sum*=i;
    }
    printf("=%i",sum);
    return 0;
}
