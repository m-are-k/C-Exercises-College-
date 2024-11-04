#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,delta,wynik;
    printf("Podaj liczbe a: ");
    scanf("%d",&a);
    printf("Podaj liczbe b: ");
    scanf("%d",&b);
    printf("Podaj liczbe c: ");
    scanf("%d",&c);
    delta = (b*b-(4*a*c));
    if(delta == 0)
    {
        wynik = -b/(2*a);
        printf("Delta jest rowna 0 a wynik funkcji kwadratowej to: %d",wynik);
    } else if(delta > 0)
    {
        int wynik1;
        int wynik2;
        int pierwiastek_z_delty = sqrt(delta);
        wynik1 = (-b-pierwiastek_z_delty)/(2*a);
        wynik2 = (-b+pierwiastek_z_delty)/(2*a);
        printf("Delta jest wieksza od 0 a 1 wynik funkcji kwadratowej to: %d \ndrugi wynik to: %d",wynik1,wynik2);
    } else if(delta < 0)
    {
        printf("Funkcja nie ma rozwiazan");
    };
    return 0;
}
