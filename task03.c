#include <stdio.h>

int main(void) {
    int number;
    int digitSum;
    int evenCount = 0, oddCount = 0;
    double evenSum = 0.0, oddSum = 0.0;
    long long temp;

    printf("Enter integers (0 to stop):\n");

    while (scanf("%d", &number) == 1 && number != 0) {
        temp = number;
        if (temp < 0) {
            temp = -temp;
        }

        digitSum = 0;
        do {
            digitSum += (int)(temp % 10);
            temp /= 10;
        } while (temp > 0);

        if (digitSum % 2 == 0) {
            evenCount++;
            evenSum += number;
        } else {
            oddCount++;
            oddSum += number;
        }
    }

    printf("\nEven digit sum count: %d\n", evenCount);
    printf("Odd digit sum count: %d\n", oddCount);

    if (evenCount > 0) {
        printf("Even group average: %.2f\n", evenSum / evenCount);
    } else {
        printf("Even group average: no numbers\n");
    }

    if (oddCount > 0) {
        printf("Odd group average: %.2f\n", oddSum / oddCount);
    } else {
        printf("Odd group average: no numbers\n");
    }

    /* && evaluates the right condition only if the left is true;
       || evaluates the right condition only if the left is false. */
    return 0;
}
