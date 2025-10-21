#include <stdio.h>

int main() {
    int choice;

    printf("Factory Machine State:\n");
    printf("1. Start\n");
    printf("2. Pause\n");
    printf("3. Emergency Stop\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Machine Started.\n");
            break;

        case 2:
            printf("Machine Paused.\n");
            break;

        case 3:
            printf("EMERGENCY STOP activated!\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
