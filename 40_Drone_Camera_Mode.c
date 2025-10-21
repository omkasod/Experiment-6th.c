#include <stdio.h>

int main() {
    int choice;

    printf("Drone Camera Mode:\n");
    printf("1. Photo Mode\n");
    printf("2. Video Mode\n");
    printf("3. Thermal Mode\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Camera switched to PHOTO mode.\n");
            break;

        case 2:
            printf("Camera switched to VIDEO mode.\n");
            break;

        case 3:
            printf("Camera switched to THERMAL mode.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
