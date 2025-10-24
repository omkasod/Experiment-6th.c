#include <stdio.h>

int main() {
    int choice;

    printf("AI Voice Assistant:\n");
    printf("1. Play Music\n");
    printf("2. Check Weather\n");
    printf("3. Set Reminder\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Playing your favorite music.\n");
            break;

        case 2:
            printf("Today's weather is sunny.\n");
            break;

        case 3:
            printf("Reminder set successfully.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
