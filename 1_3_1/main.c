#include <stdio.h>
#include <stdlib.h>

/*
Napisz program, kt�ry wczytuje ze standardowego wej�cia liczb�
ca�kowit� n i wypisuje na standardowe wyj�cie warto�� bezwzgl�dn�
z n.
Do rozwi�zania zadania nie u�ywaj funkcji bibliotecznych za wyj�tkiem operacji wej�cia/wyj�cia.
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
