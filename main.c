#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[40];
    unsigned int e;
    printf("Que tal?...\n\n");
    printf("Como te llamas?...\n");
    fgets(nom, sizeof(nom), stdin);
    printf("Ingresa tu edad: ");
    scanf("%u", &e);
    printf("\n\nHola %s, vas a cumplir %u", nom, e+1);
    return 0;
}
