#include <stdio.h>

int main() {
    int light;

    printf("Light Automation:\n");
        printf("1. Bright\n");
        printf("2. Dim\n");
       printf("3. Off\n");
        printf("Enter choice: ");
    scanf("%d", &light);

    switch(light) {
        case 1:
         printf("Lights set to Bright.\n"); 
         break;

        case 2:
         printf("Lights set to Dim.\n"); 
         break;

        case 3: 
        printf("Lights turned OFF.\n");
         break;

        default: 
        printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
