#include<stdio.h>

int main(){
    int task;
        printf("Select robot task:\n");
        printf("1. Cleaning\n");  
        printf("2. Surveillance\n");  
        printf("3. Delivery\n");  
        printf("Enter task: "); 
        scanf("%d", &task);
        
        
        switch(task){

            case 1:
                printf("Robot is cleaning now.\n");
                    break;

            case 2:
                printf("Robot is on Surveilance now.\n");
                    break;

            case 3:
                printf("Robot is Delivering now.\n");
                    break;

            default:
                printf("Invalid task.\n");
                    break;


        }
        
    return 0;
}