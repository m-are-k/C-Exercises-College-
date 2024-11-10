#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char Ch;
    f=fopen("ala.dat","w+");
    fprintf(f,"witam");
    fseek(f,1,SEEK_SET);
    fscanf(f,"%c",&Ch);
    printf("%c", Ch);
    fprintf(f,"2");
    printf("Hello world!\n");
    return 0;
}
