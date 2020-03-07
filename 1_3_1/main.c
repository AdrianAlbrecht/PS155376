#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, który wczytuje ze standardowego wejœcia liczbê
ca³kowit¹ n i wypisuje na standardowe wyjœcie wartoœæ bezwzglêdn¹
z n.
Do rozwi¹zania zadania nie u¿ywaj funkcji bibliotecznych za wyj¹tkiem operacji wejœcia/wyjœcia.
*/

int main()
{
    int liczba;
    scanf("%i",&liczba);
    if(liczba>0){
        printf("%i",liczba);
    }
    else{
        printf("%i",liczba-2*liczba);
    }
}
