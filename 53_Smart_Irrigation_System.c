#include <stdio.h>

int main() {
    int choice;

    printf("Smart Irrigation System:\n");
    printf("1. Start Watering\n");
    printf("2. Stop Watering\n");
    printf("3. Check Soil Moisture\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Irrigation started.\n");
            break;

        case 2:
            printf("Irrigation stopped.\n");
            break;

        case 3:
            printf("Soil Moisture: 60%%.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
