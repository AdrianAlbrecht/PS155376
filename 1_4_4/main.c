#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,silnia=1;
    scanf("%i",&a);
    for(int i=2;i<=a;i++){
        silnia*=i;
    }
    printf("%i!: %i",a,silnia);
    return 0;
}
