#include <stdio.h>

int main() {
    int mode;

    printf("Security System:\n");
        printf("1. Arm\n");
        printf("2. Disarm\n");
        printf("3. Panic Mode\n");
        printf("Enter mode: ");
    scanf("%d", &mode);

    switch(mode) {

        case 1: 
            printf("Security System Armed.\n"); 
                break;

        case 2: 
            printf("Security System Disarmed.\n"); 
                break;

        case 3:
            printf("Panic Mode Activated! Alert!\n"); 
                break;

        default: 
            printf("Invalid selection! Enter 1-3.\n");
    }
    return 0;
}
