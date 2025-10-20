#include <stdio.h>

int main() {
    int choice;
    
    printf("Garage Door Control:\n");
        printf("1. Open\n");
        printf("2. Close\n");
        printf("3. Stop\n");
        printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: 
            printf("Garage door opening...\n"); 
                break;

        case 2: 
             printf("Garage door closing...\n"); 
                break;

        case 3: 
            printf("Garage door stopped.\n"); 
                break;

        default: 
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
