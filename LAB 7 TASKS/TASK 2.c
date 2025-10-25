#include <stdio.h>

int main() {
    int ward[7], i, totalPatients = 0;

    printf("Enter occupancy for 7 wards:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &ward[i]);
        totalPatients += ward[i];
    }

    printf("Ward Status:\n");
    for (i = 0; i < 7; i++) {
        if (ward[i] > 10)
            printf("Ward %d has %d patients - Overcrowded - Need Review\n", i + 1, ward[i]);
        else if (ward[i] >= 6)
            printf("Ward %d has %d patients - Stable\n", i + 1, ward[i]);
        else
            printf("Ward %d has %d patients - Underutilized - Need Review\n", i + 1, ward[i]);
    }

    printf("Total Patients are %d\n", totalPatients);
    return 0;
}

