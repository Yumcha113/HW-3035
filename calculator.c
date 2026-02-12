// CS 3035 Homework 1 - Question 2

#include <stdio.h>

// Function to add three numbers: x + y + z
float add(float x, float y, float z) {
    return x + y + z;
}

// Function to subtract three numbers: z - y - x
float subtract(float x, float y, float z) {
    return z - y - x;
}

// Function to divide two numbers: x / y
float divide(float x, float y) {
    return x / y;
}

// Function to multiply two numbers: x * y
float multiply(float x, float y) {
    return x * y;
}

int main() {
    float x, y, z;
    float numerator, denominator, result;
    
    // Get input values from user
    printf("Enter value for x: ");
    scanf("%f", &x);
    printf("Enter value for y: ");
    scanf("%f", &y);
    printf("Enter value for z: ");
    scanf("%f", &z);
    
    // Calculate the expression: ((x+y+z)*x)/(z-y-x)*y
    // divide(multiply(add(x,y,z),x), multiply(subtract(x,y,z),y))
    
    // Calculate numerator: (x+y+z)*x
    numerator = multiply(add(x, y, z), x);
    
    // Calculate denominator: (z-y-x)*y
    denominator = multiply(subtract(x, y, z), y);
    
    // Check if denominator is 0 to avoid division by zero
    if (denominator == 0) {
        printf("Error: Division by zero! The denominator is 0.\n");
    } else {
        // Perform the division
        result = divide(numerator, denominator);
        printf("Result: %f\n", result);
    }
    
    return 0;
}
