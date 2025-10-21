#include <stdio.h>

int main() {
    int choice;

    printf("Library Management System:\n");
    printf("1. Borrow Book\n");
    printf("2. Return Book\n");
    printf("3. Search Book\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Book borrowed successfully.\n");
            break;

        case 2:
            printf("Book returned successfully.\n");
            break;

        case 3:
            printf("Searching for book...\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
