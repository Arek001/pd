#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    int i=1;
    int suma=0;
    printf("Program poprosi o wpisanie 10 liczb\n");
    printf("Nastepnie zwroci sume\n");
    while (i<=10)
    {
        printf("Podaj liczbe:\n");
        scanf("%d",&liczba);
        suma=suma+liczba;
        i++;
    }
    printf("Wynik podanych liczb wynosi:\n%d",suma);
    return 0;
}
