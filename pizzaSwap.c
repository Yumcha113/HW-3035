#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int customer1 = 9;  // John's original order
    int customer2 = 4;  // Mary's original order

    printf("Before swap:\n");
    printf("Customer 1 (John) has: %d pizzas\n", customer1);
    printf("Customer 2 (Mary) has: %d pizzas\n", customer2);

    swap(&customer1, &customer2);

    printf("\nAfter swap:\n");
    printf("Customer 1 (John) has: %d pizzas\n", customer1);
    printf("Customer 2 (Mary) has: %d pizzas\n", customer2);

    return 0;
}
