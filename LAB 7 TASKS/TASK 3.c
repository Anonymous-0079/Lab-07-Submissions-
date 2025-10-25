#include <stdio.h>

int main() {
    int status[15], fine[15], delay[15], i, totalFine = 0;      

    printf("Enter payment status for 15 students: 0 = not paid, 1 = paid\n");
    for (i = 0; i < 15; i++) {
        printf("Student %d status: ", i + 1);
        scanf("%d", &status[i]);
    }

    printf("\nEnter delay in months for 15 students\n");
    for (i = 0; i < 15; i++) {
        printf("Student %d delay: ", i + 1);
        scanf("%d", &delay[i]);
    }

    for (i = 0; i < 15; i++) {
        if (status[i] == 0) { 
            if (delay[i] == 1)
                fine[i] = 500;
            else if (delay[i] >= 2)
                fine[i] = 1000;
            else
                fine[i] = 0; 
        } else {
            fine[i] = 0; 
        }

        totalFine += fine[i];
    }

    printf("\nStudent\tStatus\t\tDelay\tFine\tRemark\n");

    for (i = 0; i < 15; i++) {
        printf("%d\t", i + 1);

        if (status[i] == 1)
            printf("Paid\t\t");
        else
            printf("NotPaid\t\t");

        printf("%d\t%d\t", delay[i], fine[i]);

        if (status[i] == 1)
            printf("Cleared\n");
        else
            printf("Defaulter\n");
    }

    printf("Total fine collected: Rs. %d\n", totalFine);

    return 0;
}


