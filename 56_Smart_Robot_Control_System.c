#include <stdio.h>

int main() {
    int choice;

    printf("Smart Robot Control System:\n");
    printf("1. Move Forward\n");
        printf("2. Move Backward\n");
        printf("3. Stop\n");
        printf("4. Turn Left\n");
        printf("5. Turn Right\n");
        printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
        printf("Robot moving forward.\n");
        break;

        case 2:
         printf("Robot moving backward.\n");
          break;

        case 3: 
        printf("Robot stopped.\n"); 
        break;

        case 4: 
            printf("Robot turning left.\n"); 
        break;

        case 5: 
        printf("Robot turning right.\n"); 
        break;

        default: 
        printf("Invalid command.\n");
    }
    return 0;
}
