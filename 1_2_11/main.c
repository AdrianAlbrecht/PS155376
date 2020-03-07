#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double liczba=0;
    scanf("%lf",&liczba);
    printf("%lf",round(liczba*100)/100);
    return 0;
}
