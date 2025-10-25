#include <stdio.h>

int main() {
    int units[10], i, highCount = 0;
    float rate[10], bill[10], totalRevenue = 0;

    printf("Enter electricity units consumed by 10 households\n");
    for (i = 0; i < 10; i++) {
        printf("House %d: ", i + 1);
        scanf("%d", &units[i]);
    }

    for (i = 0; i < 10; i++) {
        if (units[i] <= 200) {
            rate[i] = 15;
        } else {
            if (units[i] <= 500) {
                rate[i] = 20;
            } else {
                rate[i] = 25;
            }
        }

        bill[i] = units[i] * rate[i];
        totalRevenue += bill[i];

        if (units[i] > 700) {
            highCount++;
        }
    }

    printf("\nHouse\tUnits\tRate\tBill\t\tRemark\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\t%.2f\t%.2f\t", i + 1, units[i], rate[i], bill[i]);

        if (units[i] > 700)
            printf("High Consumption\n");
        else
            printf("\n");
    }

    printf("Total revenue collected: Rs. %.2f\n", totalRevenue);
    printf("Number of high consumption houses: %d\n", highCount);

    return 0;
}


