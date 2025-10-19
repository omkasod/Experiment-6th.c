#include<stdio.h>

int main(){
    int choice;
        printf("Water pump system: \n");
        printf("1. Pump ON.\n");
        printf("2. Pump OFF\n");
        printf("3. Emergency stop.\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);


        switch(choice){

            case 1:
                printf("Pump is ON now.\n");
                    break;

            case 2:
                printf("Pump is OFF now.\n");
                    break;

            case 3:
                printf("Emergency stop is activated.\n");
                    break;

            default:
                printf("Invalid choice.\n");
                    break;





        }
    return 0;
}