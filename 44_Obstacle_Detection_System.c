#include <stdio.h>

int main() {
    int choice;

    printf("Obstacle Detection System:\n");
    printf("1. Safe Path\n");
    printf("2. Obstacle Ahead\n");
    printf("3. Turn Required\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Path is clear.\n");
            break;

        case 2:
            printf("Obstacle detected ahead!\n");
            break;

        case 3:
            printf("Turn robot to avoid obstacle.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
