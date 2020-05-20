#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wyraz[]="informatyka";
    char* p= wyraz; // p=0x28fefb"informatyka"
    int a = sizeof(char); // a=1
    p = wyraz+5; // p=0x28ff00"matyka"  , *p=109'm'
    char w = *wyraz+5; //w=110'n'  , &w =0x28ff07
    w= *(wyraz+5); //w=109'm'  , &w =0x28ff07"m\001"
    *p = (wyraz+8)[-2]; // p=0x28ff00"aatyka"  , *p=97'a'
    return 0;
}
