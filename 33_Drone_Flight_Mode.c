#include <stdio.h>

int main() {
    int choice;

    printf("Drone Flight Mode:\n");
    printf("1. Take Off\n");
    printf("2. Hover\n");
    printf("3. Land\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Drone taking off...\n");
            break;

        case 2:
            printf("Drone hovering in air.\n");
            break;

        case 3:
            printf("Drone landing safely.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
