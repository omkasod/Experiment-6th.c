#include <stdio.h>

int main() {
    int choice;

    printf("Smart Traffic Control:\n");
    printf("1. Open Signal\n");
    printf("2. Close Signal\n");
    printf("3. Emergency Vehicle Mode\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Traffic signal is GREEN.\n");
            break;

        case 2:
            printf("Traffic signal is RED.\n");
            break;

        case 3:
            printf("Emergency mode activated! Signal cleared.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
