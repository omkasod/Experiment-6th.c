#include <stdio.h>

int main() {
    int choice;

    printf("Smart Elevator System:\n");
    printf("1. Go to Floor 1\n");
    printf("2. Go to Floor 2\n");
    printf("3. Go to Floor 3\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Elevator moving to Floor 1.\n");
            break;

        case 2:
            printf("Elevator moving to Floor 2.\n");
            break;

        case 3:
            printf("Elevator moving to Floor 3.\n");
            break;

        default:
            printf("Invalid floor selection.\n");
    }
    return 0;
}
