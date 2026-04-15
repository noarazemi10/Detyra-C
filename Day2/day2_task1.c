#include <stdio.h>

int main() {
    int age = 16;
    char initial = 'N';
    float height = 1.78;
    double average = 3.0;

    short bonusPoints = 120;
    long population = 1800000;

    printf("\n===== PROFILI =====\n");
    printf("Mosha: %d\n", age);
    printf("Iniciali: %c\n", initial);
    printf("Gjatesia: %.2f m\n", height);
    printf("Mesatarja: %.2lf\n", average);
    printf("Piket shtese (short): %d\n", bonusPoints);
    printf("Popullsia (long): %ld\n", population);

    return 0;
}
