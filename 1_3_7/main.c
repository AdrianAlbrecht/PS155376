#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //ax^2+bx+c=0
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a!=0){
        float delta=(b*b)-(4*a*c);
        if(delta>0)
            printf("2 rozwiazania:\nx1=%f\nx2=%f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
        else if(delta==0){
            printf("1 rozwiazanie:\nx=%f",-b/2*a);
        }
        else{
            printf("BRAK rozwiazan");
        }
    }
    else{
        if(b!=0)
            printf("1 rozwiazanie: x=%f",-c/b);
        else{
            if(c!=0)
                printf("BRAK rozwiazan");
            else
                printf("Nieskonczenie wiele rozwiazan");
        }
    }
    return 0;
}
