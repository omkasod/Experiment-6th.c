#include <stdio.h>

int main() {
    int status;
    
    printf("Machine Status:\n");
        printf("1. Running\n");
        printf("2. Maintenance\n");
        printf("3. Shutdown\n");
        printf("Enter status: ");
    scanf("%d", &status);

    switch(status) {

        case 1: 
        printf("Machine is running smoothly.\n"); 
        break;

        case 2: 
        printf("Machine under maintenance.\n");
         break;

        case 3: 
        printf("Machine shutdown completed.\n");
         break;

        default:
         printf("Invalid status! Enter 1-3.\n");
    }
    return 0;
}
