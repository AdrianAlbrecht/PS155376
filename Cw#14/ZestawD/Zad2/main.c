#include <stdio.h>
#include <stdlib.h>

int samogloski(char *w){
    int ile=0;
    for(int i=0;*(w+i)!=0;i++){
       if(*(w+i)=='a' || *(w+i)=='e' || *(w+i)=='u' || *(w+i)=='i' || *(w+i)=='y' || *(w+i)=='o' || *(w+i)=='A' || *(w+i)=='E' || *(w+i)=='U' || *(w+i)=='I' || *(w+i)=='Y' || *(w+i)=='O')
            ile++;
    }
    return ile;
}

int main()
{
    char *wyraz="Nabuchodonozor";
    printf("%s\n",wyraz);
    printf("%i\n",samogloski(wyraz));
    return 0;
}
