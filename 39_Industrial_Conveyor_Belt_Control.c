#include <stdio.h>

int main() {
    int choice;

    printf("Conveyor Belt Control:\n");
    printf("1. Start Belt\n");
    printf("2. Stop Belt\n");
    printf("3. Reverse Belt\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Conveyor Belt Started.\n");
            break;

        case 2:
            printf("Conveyor Belt Stopped.\n");
            break;

        case 3:
            printf("Conveyor Belt Reversed.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
