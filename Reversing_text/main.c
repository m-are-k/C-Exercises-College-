#include <stdio.h>  // Biblioteka potrzebna do printf
#include <string.h> // Biblioteka do operacji na �a�cuchach

// Funkcja do odwracania �a�cucha
void OdwrocTekst(char t[]) {
    int n = strlen(t); // Oblicza d�ugo�� �a�cucha

    // P�tla do zamiany znak�w na odpowiednich pozycjach
    for (int i = 0; i < n / 2; i++) {
        char temp = t[i];              // Zapami�tujemy znak na pocz�tku
        t[i] = t[n - i - 1];           // Zamieniamy go z ko�ca
        t[n - i - 1] = temp;           // Przywracamy zapami�tany znak na ko�cu
    }
}

int main() {
    char t[100];


    printf("Wprowadz lancuch: ");
    scanf("%s", t);


    OdwrocTekst(t);



    printf("Odwrocony lancuch: %s\n", t);

    return 0;
}
