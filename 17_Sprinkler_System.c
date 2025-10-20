#include <stdio.h>

int main() {
    int choice;

    printf("Sprinkler System:\n");
        printf("1. Water Lawn\n");
        printf("2. Water Garden\n");
        printf("3. Stop\n");
        printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Lawn watering started.\n"); 
                 break;

        case 2:
            printf("Garden watering started.\n"); 
                break;

        case 3:
            printf("Sprinkler stopped.\n"); 
                break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
