#include <stdio.h>

int main() {
    int mode;

    printf("Washing Machine Modes:\n");
        printf("1. Wash\n");
        printf("2. Rinse\n");
        printf("3. Spin\n");
        printf("Enter mode: ");
    scanf("%d", &mode);

    switch(mode) {

        case 1: 
        printf("Washing clothes...\n"); 
        break;

        case 2: 
        printf("Rinsing clothes...\n"); 
        break;

        case 3: 
        printf("Spinning clothes...\n"); 
        break;

        default: 
        printf("Invalid mode! Enter 1-3.\n");
    }
    return 0;
}
