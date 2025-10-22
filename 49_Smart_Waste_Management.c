#include <stdio.h>

int main() {
    int choice;

    printf("Smart Waste Management System:\n");
    printf("1. Bin Full Alert\n");
    printf("2. Bin Empty\n");
    printf("3. Auto Clean Mode\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Garbage bin is FULL. Cleaning required!\n");
            break;

        case 2:
            printf("Bin is EMPTY.\n");
            break;

        case 3:
            printf("Auto Cleaning Activated.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
