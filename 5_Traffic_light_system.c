#include<stdio.h>

int main(){
    int signal;

        printf("traffic light system:\n");
        printf("1. Red\n");
        printf("2. yellow\n");
        printf("3. Green\n");
        printf("Enter signal: ");
        scanf("%d", &signal);


        switch(signal){

            case 1:
                printf("Stop\n");
                    break;

            case 2:
                printf("Wait\n");
                    break;
            
            case 3:
                printf("Go\n");
                    break;

            default:
                printf("Invalid signal\n");
                   



        }
    return 0;
}