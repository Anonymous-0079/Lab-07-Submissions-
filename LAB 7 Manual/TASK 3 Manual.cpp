#include <stdio.h>

int main() {
    float weight[8];
    int fine = 0, totalFine = 0, flaggedCount = 0;

    printf("Enter baggage weight (kg) for 8 passengers:\n");
    for(int i = 0; i < 8; i++) {
        scanf("%f", &weight[i]);
    }

    for(int i = 0; i < 8; i++) {
        if(weight[i] <= 20) {
            fine = 0;
            printf("Passenger %d: %.2f kg and Free\n", i + 1, weight[i]);
        } else if(weight[i] <= 30) {
            fine = 500;
            printf("Passenger %d: %.2f kg and Fine: Rs. %d\n", i + 1, weight[i], fine);
        } else {
            fine = 1000;
            flaggedCount += 1;
            printf("Passenger %d: %.2f kg and Fine: Rs. %d (Flagged for inspection)\n", i + 1, weight[i], fine);
        }
        totalFine += fine;
    }

    printf("\nTotal fine collected: Rs. %d\n", totalFine);
    printf("Flagged baggage count: %d\n", flaggedCount);

    return 0;
}

