#include <stdio.h>

int main() {
    int choice;

    printf("Smart Parking System:\n");
    printf("1. Check Available Slots\n");
    printf("2. Park Vehicle\n");
    printf("3. Exit Vehicle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("There are 5 slots available.\n");
            break;

        case 2:
            printf("Vehicle parked successfully.\n");
            break;

        case 3:
            printf("Vehicle exited from parking.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
