#include <stdio.h>
#include <stdlib.h>

int main() {
    char tekst1[20] = "123";
    char tekst2[] = "123";

    int a = 1;
    for (int k = 0; tekst1[k] != '\0' || tekst2[k] != '\0'; k++) {
        if (tekst1[k] != tekst2[k]) {
            a = 0;
            break;
        }
    }

    if (a) {
        printf("teksty sa takie same \n");
    } else {
        printf("teksty sa rozne\n");
    }

    return 0;
}
