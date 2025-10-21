#include <stdio.h>

int main() {
    int choice;

    printf("Gripper Control System:\n");
    printf("1. Open Gripper\n");
    printf("2. Close Gripper\n");
    printf("3. Hold Object\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Gripper Opened.\n");
            break;

        case 2:
            printf("Gripper Closed.\n");
            break;

        case 3:
            printf("Object Held Firmly.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
