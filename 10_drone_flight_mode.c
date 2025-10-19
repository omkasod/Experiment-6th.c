#include <stdio.h>

int main() {
    int mode;
    printf("Drone Flight Modes:\n");
    printf("1. Take Off\n");
    printf("2. Hover\n");
    printf("3. Land\n");
    printf("Enter your choice: ");
    scanf("%d", &mode);

    switch(mode) {

        case 1:
            printf("Drone Taking Off!\n"); 
                break;
                
        case 2: 
            printf("Drone Hovering...\n");
                 break;

        case 3: 
            printf("Drone Landing...\n");
                 break;

        default: 
            printf("Invalid Choice!\n");
    }

    return 0;
}
