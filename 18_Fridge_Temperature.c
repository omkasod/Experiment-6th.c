#include <stdio.h>

int main() {
    int choice;

    printf("Fridge Temperature:\n");
        printf("1. Cool\n");
        printf("2. Freeze\n");
        printf("3. Defrost\n");
        printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: 
        printf("Fridge Cooling ON.\n"); 
        break;

        case 2: 
        printf("Fridge Freezing ON.\n"); 
        break;

        case 3: 
        printf("Fridge Defrosting ON.\n"); 
        break;
        
        default: 
        printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
