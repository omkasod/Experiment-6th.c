#include <stdio.h>

int main() {
    int choice;

    printf("Auto Driving Car System:\n");
    printf("1. Start Self Drive\n");
    printf("2. Park Car\n");
    printf("3. Emergency Stop\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Self-driving mode activated.\n");
            break;

        case 2:
            printf("Car parked safely.\n");
            break;

        case 3:
            printf("Emergency stop applied!\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
