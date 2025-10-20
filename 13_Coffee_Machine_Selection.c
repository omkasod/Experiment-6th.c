#include <stdio.h>

int main() {
    int choice;
    
    printf("Coffee Machine Menu:\n");
        printf("1. Espresso\n");
        printf("2. Latte\n");
        printf("3. Cappuccino\n");
        printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Making Espresso...\n"); 
                break;

        case 2: 
            printf("Making Latte...\n");
                break;

        case 3:
            printf("Making Cappuccino...\n"); 
                break;

        default:
        printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
