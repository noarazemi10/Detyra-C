#include <stdio.h>

int main() {
    int mosha, opsioni;
    char iniciali;
    double pike;

    // Marrja e inputeve
    printf("Shkruani moshen: ");
    scanf("%d", &mosha);

    printf("Shkruani inicialin: ");
    scanf(" %c", &iniciali); // hapësira para %c shmang problemin me ENTER

    printf("Shkruani piket paraprake: ");
    scanf("%lf", &pike);

    printf("Zgjidhni punetorine (1, 2 ose 3): ");
    scanf("%d", &opsioni);

    // Kontrolli i moshes (p.sh. 15 - 25 lejohet)
    if (mosha < 15 || mosha > 25) {
        printf("\nNuk plotesoni kushtin e moshes per pjesemarrje!\n");
    }

    // Klasifikimi sipas pikeve
    char rezultat[50];

    if (pike < 50) {
        sprintf(rezultat, "Nevojitet me shume ushtrim");
    } else if (pike >= 50 && pike < 80) {
        sprintf(rezultat, "Gati per vazhdim");
    } else {
        sprintf(rezultat, "Gati per sfide");
    }

    // Zgjedhja e punetorise me switch
    char punetoria[50];

    switch (opsioni) {
        case 1:
            sprintf(punetoria, "Programim Bazik");
            break;
        case 2:
            sprintf(punetoria, "Algoritme");
            break;
        case 3:
            sprintf(punetoria, "Projekte Praktike");
            break;
        default:
            sprintf(punetoria, "Opsion i pavlefshem");
    }

    // Output final
    printf("\n----- PERMBLEDHJE -----\n");
    printf("Iniciali: %c\n", iniciali);
    printf("Mosha: %d\n", mosha);
    printf("Piket: %.2lf\n", pike);
    printf("Punetoria: %s\n", punetoria);
    printf("Vleresimi: %s\n", rezultat);

    return 0;
}
