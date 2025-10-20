#include <stdio.h>

int main() {
    int action;

    printf("Robot Arm Control:\n");
        printf("1. Pick Object\n");
        printf("2. Place Object\n");
        printf("3. Stop Arm\n");
        printf("Enter action: ");
    scanf("%d", &action);

    switch(action) {

        case 1: 
            printf("Robot Arm picking up object...\n"); 
                break;

        case 2: 
            printf("Robot Arm placing object...\n"); 
                break;

        case 3: 
            printf("Robot Arm stopped.\n"); 
                break;

        default: 
            printf("Invalid action! Enter 1-3.\n");
    }
    return 0;
}
