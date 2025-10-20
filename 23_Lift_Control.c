#include <stdio.h>

int main() {
    int floor;
    
    printf("Lift Control Panel:\n");
        printf("1. Ground Floor\n");
        printf("2. First Floor\n");
        printf("3. Second Floor\n");
        printf("Enter floor: ");
    scanf("%d", &floor);

    switch(floor) {

        case 1: 
             printf("Lift going to Ground Floor.\n");
                 break;

        case 2: 
            printf("Lift going to First Floor.\n"); 
                break;

        case 3: 
            printf("Lift going to Second Floor.\n"); 
               break;

        default: 
            printf("Invalid floor! Enter 1-3.\n");
    }
    return 0;
}
