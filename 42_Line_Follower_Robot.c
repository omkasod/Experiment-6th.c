#include <stdio.h>

int main() {
    int choice;

    printf("Line Follower Robot:\n");
    printf("1. Follow Line\n");
    printf("2. Stop\n");
    printf("3. Turn Around\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Robot following line...\n");
            break;

        case 2:
            printf("Robot stopped.\n");
            break;

        case 3:
            printf("Robot turning around.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }

    return 0;
}
