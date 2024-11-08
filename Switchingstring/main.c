#include <stdio.h>

int main() {
    char tekst1[20] = "Ala";
    char tekst2[] = " ma kota";

    int i = 0;
    while (tekst1[i] != '\0') {
        i++;
    }

    int j = 0;
    while (tekst2[j] != '\0') {
        tekst1[i] = tekst2[j];
        i++;
        j++;
    }

    tekst1[i] = '\0';

    printf("Oto polaczony tekst: %s\n", tekst1);

    return 0;
}
