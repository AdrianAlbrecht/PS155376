#include <stdio.h>
#include <stdlib.h>

void zlicz();
int zlicz_il=0;

int main()
{
    int n=5; //Zmiena wartosci zmiennej to zmiana ilosci wywolan :)
    for(int i=0;i<n;i++){
        zlicz();
    }
    return 0;
}

void zlicz(){
    zlicz_il++;
    printf("Ilosc wywolan: %i :)\n",zlicz_il);
}
