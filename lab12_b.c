#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of items: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of items.\n");
        return 1;
    }

    float *prices = malloc(n * sizeof(float)); // using malloc and making n the number of items
    if (prices == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter price for item %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    float total = 0;
    for (int i = 0; i < n; i++) {
        printf("Item %d: $%.2f\n", i + 1, prices[i]);
        total += prices[i];
    }

    printf("Total: $%.2f\n", total);

    free(prices); // frees the pointer
    return 0;
}
