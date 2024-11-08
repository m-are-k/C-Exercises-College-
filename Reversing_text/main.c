#include <stdio.h>  // Biblioteka potrzebna do printf
#include <string.h> // Biblioteka do operacji na ³añcuchach

// Funkcja do odwracania ³añcucha
void OdwrocTekst(char t[]) {
    int n = strlen(t); // Oblicza d³ugoœæ ³añcucha

    // Pêtla do zamiany znaków na odpowiednich pozycjach
    for (int i = 0; i < n / 2; i++) {
        char temp = t[i];              // Zapamiêtujemy znak na pocz¹tku
        t[i] = t[n - i - 1];           // Zamieniamy go z koñca
        t[n - i - 1] = temp;           // Przywracamy zapamiêtany znak na koñcu
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
