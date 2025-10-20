#include <stdio.h>

int main() {
    int choice;
    
    printf("Temperature Control:\n");
        printf("1. Heat\n");
        printf("2. Cool\n");
        printf("3. Maintain\n");
        printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: 
            printf("Heating system activated.\n"); 
                break;

        case 2: 
            printf("Cooling system activated.\n"); 
                break;

        case 3: 
            printf("Maintaining current temperature.\n"); 
                break;

        default: 
        printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
