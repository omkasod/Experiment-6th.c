#include <stdio.h>

int main() {
    int option;
    printf("Smart Home Control:\n");
    printf("1. Lights\n");
    printf("2. Fan\n");
    printf("3. Door Lock\n");
     printf("Enter choice: ");
    scanf("%d", &option);

    switch(option) {
        case 1: 
            printf("Lights are turned ON.\n");
                break;
        case 2: 
            printf("Fan started.\n");
                break;
        case 3:
            printf("Door Locked.\n"); 
                 break;
        default: 
            printf("Invalid Option!\n");
    }

    return 0;
}
