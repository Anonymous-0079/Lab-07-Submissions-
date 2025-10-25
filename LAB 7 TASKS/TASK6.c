#include <stdio.h>

int main() {
    int posts[10], i, j, maxPosts = 0, maxDay = 0, totalP = 0, streak = 0;
    float avg;

    printf("Enter the number of posts made consecutively for 10 days\n");
    for (i = 0; i < 10; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &posts[i]);
        totalP += posts[i];

        if (posts[i] > maxPosts) {
            maxPosts = posts[i];
            maxDay = i + 1;
        }
    }

    avg = totalP / 10.0;

    for (i = 0; i < 8; i++) { 
        if (posts[i] < posts[i + 1] && posts[i + 1] < posts[i + 2]) {
            streak = 1;
            break;
        }
    }
	
    printf("Day\tPosts\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\n", i + 1, posts[i]);
    }
    printf("Highest activity on Day %d with %d posts\n", maxDay, maxPosts);
    printf("Average daily activity: %.2f posts/day\n", avg);

    if (streak == 1)
        printf("3-day increasing streak detected!\n");
    else
        printf("No 3-day increasing streak found.\n");

    return 0;
}

