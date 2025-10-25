#include <stdio.h>

int main() {
    int strength[6], chiefInvigilator = 0, i, totalStudents = 0, totalInvigilators = 0, invigilators[6];       

    printf("Enter the number of students in each of the 6 sections\n");
    for (i = 0; i < 6; i++) {
        printf("Section %d: ", i + 1);
        scanf("%d", &strength[i]);
        totalStudents += strength[i];
    }

    for (i = 0; i < 6; i++) {
        if (strength[i] <= 30)
            invigilators[i] = 1;
        else if (strength[i] <= 60)
            invigilators[i] = 2;
        else
            invigilators[i] = 3;

        totalInvigilators += invigilators[i];
    }

    if (totalStudents > 300) {
        chiefInvigilator = 1;
        totalInvigilators += 1;
    }

    printf("\nSection\tStudents\tInvigilators\n");

    for (i = 0; i < 6; i++) {
        printf("%d\t%d\t\t%d\n", i + 1, strength[i], invigilators[i]);
    }
    printf("Total students: %d\n", totalStudents);
    if (chiefInvigilator == 1)
        printf("Chief Invigilator: Yes\n");
    else
        printf("Chief Invigilator: No\n");
    printf("Total invigilators needed: %d\n", totalInvigilators);

    return 0;
}



