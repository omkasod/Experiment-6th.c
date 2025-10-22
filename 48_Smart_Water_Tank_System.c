#include <stdio.h>

int main() {
    int choice;

    printf("Smart Water Tank System:\n");
    printf("1. Start Pump\n");
    printf("2. Stop Pump\n");
    printf("3. Check Water Level\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Pump started.\n");
            break;

        case 2:
            printf("Pump stopped.\n");
            break;

        case 3:
            printf("Water level at 75%%.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
