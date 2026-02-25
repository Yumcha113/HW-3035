#include <stdio.h>

int main() {
    float prices[10]; // created an array of 10
    int n;

    printf("Enter number of items (max 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid number of items.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter price for item %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    float total = 0;
    for (int i = 0; i < n; i++) {
        printf("Item %d: $%.2f\n", i + 1, prices[i]); // this will output the number in 2 decimal places
        total += prices[i];
    }

    printf("Total: $%.2f\n", total);
    return 0;
}
