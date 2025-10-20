#include<stdio.h>

int main() {
    int choice;

    printf("Smart Door System:\n");
         printf("1. Lock\n");
         printf("2. Unlock\n");
         printf("3. Alarm\n");
         printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Door Locked.\n"); 
                break;

        case 2: 
            printf("Door Unlocked.\n");
                break;

        case 3: 
            printf("Alarm Activated!\n"); 
             break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
