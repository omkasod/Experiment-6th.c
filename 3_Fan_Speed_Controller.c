#include<stdio.h>

int main(){
    int speed;

            printf("Set fan speed:\n");
            printf("1. Low\n");
            printf("1. Medium\n");
            printf("1. High\n");
            printf("Eneter your chioce: \n");
            scanf("%d", &speed);


            switch(speed){

                case 1: 
                    printf("Fan speed set to Low.\n");
                        break;

                 case 2: 
                    printf("Fan speed set to Medium.\n");
                        break;

                 case 3: 
                    printf("Fan speed set to High.\n");
                        break;

                 default: 
                    printf("Invalid choice.\n");


            }

    return 0;
}