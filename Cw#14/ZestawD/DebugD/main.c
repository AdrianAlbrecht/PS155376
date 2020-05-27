#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wyraz[]="Olsztyn";
    char * w= wyraz;  // w=0x28feff   , * w='O'
    int q = sizeof(char); // q=1
    w = wyraz+5; // w=0x28ff04   , * w='y'
    char t = *wyraz+2; //t='Q'    , &t=0x28ff07
    t = *(wyraz+2);   //t='s'    , &t=0x28ff07
    *w=(wyraz+7)[-3]; // w=0x28ff04  , *w='t'
    w =&(*(wyraz+3))-1; // w=0x28ff01   , * w='s'
    return 0;
}
