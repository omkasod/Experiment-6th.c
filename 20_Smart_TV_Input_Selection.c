#include <stdio.h>

int main() {
    int input;
    
    printf("Smart TV Inputs:\n");
        printf("1. HDMI 1\n");
        printf("2. HDMI 2\n");
        printf("3. USB\n");
        printf("Enter your choice: ");
    scanf("%d", &input);

    switch(input) {

        case 1: 
            printf("Switched to HDMI 1.\n"); 
                break;

        case 2: 
            printf("Switched to HDMI 2.\n"); 
                break;

        case 3: 
            printf("USB mode activated.\n"); 
                break;

        default: 
            printf("Invalid input! Enter 1-3.\n");
    }
    return 0;
}
