#include <stdio.h>
int main() {
    int mode;
        printf("Air conditioner modes: \n");
        printf("1. Cool.\n");
         printf(". Fan.\n");
          printf(". Dry.\n");
           printf("Enter mode: \n");
           scanf("%d", &mode);



    switch(mode) {

        case 1:
            printf("AC is Cooling.\n"); 
                break;
        case 2: 
            printf("AC Fan mode ON.\n"); 
             break;
        case 3: 
            printf("AC Dry mode ON.\n"); 
                break;
        default: 
            printf("Invalid Mode! Enter 1-3.\n");
    }
    return 0;
}
