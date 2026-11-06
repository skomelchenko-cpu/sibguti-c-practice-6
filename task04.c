#include <stdio.h>

int main(void) {
    double gb;
    double cost1 = 0.0, cost2 = 0.0, cost3 = 0.0;
    double total;

    printf("Enter storage size (GB): ");

    if (scanf("%lf", &gb) != 1 || gb < 0) {
        printf("Invalid input!\n");
        return 0;
    }

    if (gb <= 10) {
        cost1 = gb * 1.0;
    } else if (gb <= 60) {
        cost1 = 10.0 * 1.0;
        cost2 = (gb - 10.0) * 0.8;
    } else {
        cost1 = 10.0 * 1.0;
        cost2 = 50.0 * 0.8;
        cost3 = (gb - 60.0) * 0.5;
    }

    total = cost1 + cost2 + cost3;

    printf("\nStorage size: %.2f GB\n", gb);
    printf("First tier: %.2f\n", cost1);
    printf("Second tier: %.2f\n", cost2);
    printf("Third tier: %.2f\n", cost3);
    printf("Total cost: %.2f\n", total);

    /* double offers greater precision than float, but neither type
       exactly represents every decimal money value. */
    return 0;
}
