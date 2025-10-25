#include <stdio.h>

int main() {
    float mileage[8];
    int i, needsMaintenanceCount = 0;

    printf("Enter mileage for 8 vehicles in km/hr:\n");
    for (i = 0; i < 8; i++) {
        printf("Vehicle %d: ", i + 1);
        scanf("%f", &mileage[i]);
    }

    printf("Vehicle\tMileage\t\tCategory\n");
    for (i = 0; i < 8; i++) {
        printf("%d\t%.2f\t\t", i + 1, mileage[i]);

        if (mileage[i] >= 18) {
            printf("Efficient\n");
        } 
        else if (mileage[i] >= 12 && mileage[i] <= 17) {
            printf("Average\n");
        } 
        else {
            printf("Needs Maintenance\n");
            needsMaintenanceCount++;
        }
    }

    printf("Vehicles needing maintenance: %d\n", needsMaintenanceCount);
    if (needsMaintenanceCount > 3) {
        printf("Fleet Efficiency Alert!\n");
    }

    return 0;
}

