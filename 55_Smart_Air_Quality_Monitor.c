#include <stdio.h>

int main() {
    int choice;

    printf("Smart Air Quality Monitor:\n");
    printf("1. Show AQI\n");
    printf("2. Enable Purifier\n");
    printf("3. Disable Purifier\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Current AQI: 72 (Good)\n");
            break;

        case 2:
            printf("Air Purifier Activated.\n");
            break;

        case 3:
            printf("Air Purifier Deactivated.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
