#include <stdio.h>
int main() {
    int choice;
    printf("Irrigation Control:\n");
        printf("1. Start Watering\n");
        printf("2. Stop Watering\n");
        printf("3. Schedule Timer\n");
        printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: 
            printf("Watering started.\n");
                break;

        case 2: 
            printf("Watering stopped.\n"); 
                break;

        case 3: 
            printf("Timer scheduled for watering.\n"); 
                break;

        default: 
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
