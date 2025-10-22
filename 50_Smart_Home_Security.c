#include <stdio.h>

int main() {
    int choice;

    printf("Smart Home Security System:\n");
    printf("1. Arm Security\n");
    printf("2. Disarm Security\n");
    printf("3. Intruder Alert Test\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Security System Armed.\n");
            break;

        case 2:
            printf("Security System Disarmed.\n");
            break;

        case 3:
            printf("Intruder Alert Test Successful!\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
