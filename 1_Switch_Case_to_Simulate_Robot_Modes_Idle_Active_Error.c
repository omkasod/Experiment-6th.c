#include<stdio.h>

int main(){
    int mode;

    printf("Enter robot mode:\n");
    printf("1. Idle\n ");
    printf("2. Active\n ");
    printf("3. Error\n ");
    printf("Enter your choice:\n ");
    scanf("%d", &mode);

    switch(mode){
            
        case 1:
            printf("Robot is in Idle mode.");
                break;

        case 2:
            printf("Robot is in Active mode. ");
                break;

        case 3:
            printf("Robot is in Error mode. ");
                break;

        default:
            printf("Invalid choice! Please enter 1, 2, or 3. ");

    }
    return 0;
}