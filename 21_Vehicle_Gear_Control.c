#include <stdio.h>

int main() {
    int gear;
    
    printf("Vehicle Gear System:\n");
        printf("1. Neutral\n");
        printf("2. Drive\n");
        printf("3. Reverse\n");
        printf("Enter gear: ");
    scanf("%d", &gear);

    switch(gear) {

        case 1: 
            printf("Vehicle in Neutral.\n"); 
                break;

        case 2: 
            printf("Vehicle in Drive mode.\n"); 
                break;

        case 3: 
            printf("Vehicle in Reverse.\n"); 
                break;

        default: 
            printf("Invalid gear! Enter 1-3.\n");
    }
    return 0;
}
