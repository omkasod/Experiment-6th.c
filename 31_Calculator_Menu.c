#include <stdio.h>

int main() {
    int choice;

    printf("Calculator Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Addition selected.\n");
            break;

        case 2:
            printf("Subtraction selected.\n");
            break;

        case 3:
            printf("Multiplication selected.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
