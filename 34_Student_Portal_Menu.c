#include <stdio.h>

int main() {
    int choice;

    printf("Student Portal:\n");
    printf("1. View Marks\n");
    printf("2. Download Assignment\n");
    printf("3. Logout\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Displaying marks...\n");
            break;

        case 2:
            printf("Downloading assignment...\n");
            break;

        case 3:
            printf("Logged out successfully.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
