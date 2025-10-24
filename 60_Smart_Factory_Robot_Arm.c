#include <stdio.h>

int main() {
    int choice;

    printf("Smart Factory Robot Arm:\n");
    printf("1. Pick Object\n");
    printf("2. Place Object\n");
    printf("3. Calibrate Arm\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Object picked successfully.\n");
            break;

        case 2:
            printf("Object placed successfully.\n");
            break;

        case 3:
            printf("Arm calibration done.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
