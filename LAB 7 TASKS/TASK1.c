#include <stdio.h>

int main() {
    float prices[10], discounted[10], total = 0;
    int i;

    printf("Enter the prices of 10 products\n");
    for (i = 0; i < 10; i++) {
        printf("Product %d: ", i + 1);
        scanf("%f", &prices[i]);

        if (prices[i] < 1000)
            discounted[i] = prices[i] * 0.95;   
        else if (prices[i] <= 5000)
            discounted[i] = prices[i] * 0.90;   
        else
            discounted[i] = prices[i] * 0.85;   

        total += discounted[i];
    }

    printf("Product\tOriginal\tDiscounted\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%.2f\t\t%.2f\n", i + 1, prices[i], discounted[i]);
    }
    printf("Total after discount is Rs. %.2f\n", total);

    if (total > 25000)
        printf("Gold Voucher Awarded!\n");
    else
        printf("No voucher awarded.\n");

    

    return 0;
}


