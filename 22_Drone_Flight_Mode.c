#include <stdio.h>

int main() {
    int mode;
    
    printf("Drone Flight Modes:\n");
        printf("1. Takeoff\n");
        printf("2. Hover\n");
        printf("3. Land\n");
        printf("Enter mode: ");
    scanf("%d", &mode);

    switch(mode) {

        case 1:
         printf("Drone taking off...\n"); 
         break;

        case 2:
            printf("Drone hovering in air.\n"); 
                break;

        case 3:
            printf("Drone landing safely.\n"); 
                break;

        default: 
            printf("Invalid mode! Enter 1-3.\n");
    }
    return 0;
}
