#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[40];
    printf("Que tal?...\n\n");
    printf("Como te llamas?...\n");
    fgets(nom, sizeof(nom), stdin);
    printf("\n\nHola %s\n\n", nom);
    return 0;
}
