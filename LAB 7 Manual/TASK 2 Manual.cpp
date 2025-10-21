#include <stdio.h>

int main() {
    int marks[12], gradeCount[12] = {0}, i; 

    printf("Enter marks of 12 students:\n");
    for(i = 0; i < 12; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < 12; i++) {
        if(marks[i] >= 90 && marks[i] <= 100) {
            gradeCount[0]++;
        }
        else if(marks[i] >= 86 && marks[i] < 90) {
            gradeCount[1]++;
        }
        else if(marks[i] >= 82 && marks[i] <= 85) {
            gradeCount[2]++;
        }
        else if(marks[i] >= 78 && marks[i] < 82) {
            gradeCount[3]++;
        }
        else if(marks[i] >= 74 && marks[i] < 78) {
            gradeCount[4]++;
        }
        else if(marks[i] >= 70 && marks[i] < 74) {
            gradeCount[5]++;
        }
        else if(marks[i] >= 66 && marks[i] < 70) {
            gradeCount[6]++;
        }
        else if(marks[i] >= 62 && marks[i] < 66) {
            gradeCount[7]++;
        }
        else if(marks[i] >= 58 && marks[i] < 62) {
            gradeCount[8]++;
        }
        else if(marks[i] >= 54 && marks[i] < 58) {
            gradeCount[9]++;
        }
        else if(marks[i] >= 50 && marks[i] < 54) {
            gradeCount[10]++;
        }
        else {
            gradeCount[11]++;
        }
    }

    
    printf("A+ : %d\n", gradeCount[0]);
    printf("A  : %d\n", gradeCount[1]);
    printf("A- : %d\n", gradeCount[2]);
    printf("B+ : %d\n", gradeCount[3]);
    printf("B  : %d\n", gradeCount[4]);
    printf("B- : %d\n", gradeCount[5]);
    printf("C+ : %d\n", gradeCount[6]);
    printf("C  : %d\n", gradeCount[7]);
    printf("C- : %d\n", gradeCount[8]);
    printf("D+ : %d\n", gradeCount[9]);
    printf("D  : %d\n", gradeCount[10]);
    printf("F  : %d\n", gradeCount[11]);

    if(gradeCount[11] > 6)
        printf("\nAcademic Alert: Poor Performance!\n");

    return 0;
}

