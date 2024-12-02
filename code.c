#include <stdio.h>

int main() {
    // Declare variables to store length and width
    float length, width, area;

    // Ask the user for the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area
    area   = length * width;

    // Display the result
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
