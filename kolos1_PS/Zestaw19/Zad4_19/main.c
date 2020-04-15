#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funkcja_1(int n);
int funkcja_2(int n);
int funkcja_wsk(int (* f1)(int), int (* f2)(int),int n);

int main()
{
    printf("%i\n",funkcja_wsk(&funkcja_1,&funkcja_2,16));
    printf("%i\n",funkcja_wsk(&funkcja_1,&funkcja_2,33));
    return 0;
}

int funkcja_1(int n){
    if(n%3==0)
        return n;
    return 1;
}
int funkcja_2(int n){
    if(n<30)
        return n;
    return n+1;
}
int funkcja_wsk(int (* f1)(int), int (* f2)(int),int n){
    for(int i=3;i<n;i+=3){
        if(f1(i)!=f2(i))
            return 0;
    }
    return 1;
}
