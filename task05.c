#include <stdio.h>
int main(void){
    int choice;
    int ch;
    double value, result;
    while (1){
        printf("\n===== ENERGY CONVERTER =====\n");
        printf("1. Joules to calories\n");
        printf("2. Calories to kilocalories\n");
        printf("3. kWh to Joules\n");
        printf("4. Electronvolts to Joules\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        if (scanf("%d", &choice) != 1){
            printf("Invalid input!\n");
            while ((ch = getchar()) != '\n' && ch != EOF){
            }
            if (ch == EOF){
                break;
            }
            continue;
        }
        if (choice == 0){
            printf("Program finished.\n");
            break;
        }
        if (choice < 1 || choice > 4){
            printf("Invalid menu option!\n");
            continue;
        }
        printf("Enter value: ");
        if (scanf("%lf", &value) != 1){
            printf("Invalid value!\n");
            while ((ch = getchar()) != '\n' && ch != EOF){
            }
            if (ch == EOF){
                break;
            }
            continue;
        }
        switch (choice){
            case 1:
                result = value / 4.184;
                printf("Calories: %.10g\n", result);
                break;
            case 2:
                result = value / 1000.0;
                printf("Kilocalories: %.10g\n", result);
                break;
            case 3:
                result = value * 3600000.0;
                printf("Joules: %.10g\n", result);
                break;
            case 4:
                result = value * 1.602176634e-19;
                printf("Joules: %.10g\n", result);
                break;
            default:
                printf("Invalid menu option!\n");
                break;
        }
    }
    return 0;
}
