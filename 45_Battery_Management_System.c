#include <stdio.h>

int main() {
    int choice;

    printf("Battery Management System:\n");
    printf("1. Check Battery Level\n");
    printf("2. Start Charging\n");
    printf("3. Stop Charging\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Battery Level: 76%%\n");
            break;

        case 2:
            printf("Charging Started.\n");
            break;

        case 3:
            printf("Charging Stopped.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
