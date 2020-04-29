#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    int c;
    scanf("%f %f",&a,&b);
    printf("\nWybierz operacje:\n0 => +\n1 => -\n2 => *\n3 => /\nInne => Cancel\n");
    scanf("%i",&c);
    switch(c){
        case 0: printf("%f",a+b);
        break;

        case 1: printf("%f",a-b);
        break;

        case 2: printf("%f",a*b);
        break;

        case 3: printf("%f",a/b);
        break;

        default: printf("Do widzenia! :)");
        break;
    }
    return 0;
}
