#include <stdio.h>

int main() {
    int choice;

    printf("Smart Street Light Control:\n");
    printf("1. Lights ON (Night)\n");
    printf("2. Lights OFF (Day)\n");
    printf("3. Energy Saving Mode\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Street lights are turned ON.\n");
            break;

        case 2:
            printf("Street lights are turned OFF.\n");
            break;

        case 3:
            printf("Street lights in Energy Saving Mode.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
