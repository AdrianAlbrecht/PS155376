#include <stdio.h>
#include <stdlib.h>
int main()
{
int m = 5, n = 10, o = 0;
int *p1;
int *p2;
int *p3;
p1 = &m;
p2 = &n;
o = *p1+*p2;
p3 = p1-p2; //p1 =0x28FEFC , *p1 =5
p1++;
p2--; //p2 =0x28FEF4 , *p2 =4200688
return 0;
}
