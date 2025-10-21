#include <stdio.h>

int main() {
    int choice;

    printf("Robot Speed Control:\n");
    printf("1. Slow\n");
    printf("2. Medium\n");
    printf("3. Fast\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Robot moving at SLOW speed.\n");
            break;

        case 2:
            printf("Robot moving at MEDIUM speed.\n");
            break;

        case 3:
            printf("Robot moving at FAST speed.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
