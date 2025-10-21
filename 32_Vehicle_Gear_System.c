#include <stdio.h>

int main() {
    int choice;

    printf("Vehicle Gear System:\n");
    printf("1. First Gear\n");
    printf("2. Second Gear\n");
    printf("3. Reverse Gear\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Vehicle in First Gear.\n");
            break;

        case 2:
            printf("Vehicle in Second Gear.\n");
            break;

        case 3:
            printf("Vehicle in Reverse Gear.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
