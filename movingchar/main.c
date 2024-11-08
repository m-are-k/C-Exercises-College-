#include <stdio.h>

int main() {
    char napis[100];
    char kopia[100];

    printf("Wpisz tekst: ");
    scanf("%s", napis);

    int i = 0;
    while (napis[i] != '\0') {
        kopia[i] = napis[i];
        i++;
    }
    kopia[i] = '\0';
    for (i = 0; kopia[i] != '\0'; i++) {
        kopia[i] = kopia[i + 1];
    }

    printf("Oryginalny tekst: %s\n", napis);

    printf("Tekst po usunieciu pierwszego znaku: %s\n", kopia);

    return 0;
}
