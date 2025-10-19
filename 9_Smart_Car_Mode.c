#include <stdio.h>

int main() {
    int mode;
    printf("Smart Car Modes:\n");
    printf("1. Park\n");
    printf("2. Drive\n");
    printf(". Reverse\n");
    printf("");
    scanf("%d", &mode);

    switch(mode) {
        case 1: 
            printf("Car is in Park Mode.\n");
                break;
        case 2: 
            printf("Car is in Drive Mode.\n");
                break;
        case 3: 
            printf("Car is in Reverse Mode.\n"); 
                break;
        default: printf("Invalid Mode!\n");
    }

    return 0;
}
