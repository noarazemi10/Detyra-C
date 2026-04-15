#include <stdio.h>
#include "calculator.h"

int main() {
    int choice;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Te dhenat personale\n");
        printf("2. Kontrollo numer (pozitiv/negativ)\n");
        printf("3. Nota\n");
        printf("4. Kalkulator\n");
        printf("0. Dil\n");
        printf("Zgjedhja: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                int age;
                float height;
                char grade;

                printf("Mosha: ");
                scanf("%d", &age);

                printf("Gjatesia: ");
                scanf("%f", &height);

                printf("Nota: ");
                scanf(" %c", &grade);

                printf("Mosha: %d | Gjatesia: %.2f | Nota: %c\n", age, height, grade);
                break;
            }

            case 2: {
                int num;
                printf("Shkruaj numer: ");
                scanf("%d", &num);

                if (num > 0)
                    printf("Pozitiv\n");
                else if (num < 0)
                    printf("Negativ\n");
                else
                    printf("Zero\n");
                break;
            }

            case 3: {
                int score;
                printf("Piket: ");
                scanf("%d", &score);

                if (score >= 90) printf("A\n");
                else if (score >= 80) printf("B\n");
                else if (score >= 70) printf("C\n");
                else if (score >= 60) printf("D\n");
                else printf("F\n");
                break;
            }

            case 4:
                runCalculator();
                break;

            case 0:
                printf("Duke dal...\n");
                break;

            default:
                printf("Zgjedhje e pavlefshme!\n");
        }

    } while(choice != 0);

    return 0;
}