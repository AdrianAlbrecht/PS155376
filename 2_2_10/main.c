#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sum(int n);
bool czy_pierwsza(int n);

int main()
{
    int n=0;
    scanf("%i",&n);
    printf("Suma l<%i i zarazem l jest liczba pierwsza: %i",n,sum(n-1));
    return 0;
}

int sum(int n){
    if(n==1)
        return 1;
    else if(czy_pierwsza(n))
        return sum(n-1)+n;
    return sum(n-1);
}

bool czy_pierwsza(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
