#include <stdio.h>

int main() {
    int choice;

    printf("Motor Direction Control:\n");
    printf("1. Forward\n");
    printf("2. Reverse\n");
    printf("3. Stop\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Motor rotating FORWARD.\n");
            break;

        case 2:
            printf("Motor rotating REVERSE.\n");
            break;

        case 3:
            printf("Motor STOPPED.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
