#include<stdio.h>

    int main(){

        int choice;
            printf("Light control system:\n");
            printf("1. Turn ON\n");
            printf("2. Light OFF:\n");
            printf("3. Blink\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);


            switch(choice){
                case 1: 
                    printf("Light is ON.\n");
                        break;
                
                case 2: 
                    printf("Light is OFF.\n");
                        break;
                    
                case 3: 
                    printf("Light is Blinking.\n");
                        break;

                default: 
                    printf("Invalid choice.\n");
                    
                    
            }
    
    return 0;
    }