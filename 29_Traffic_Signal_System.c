#include <stdio.h>

int main() {
    int choice;

    printf("Traffic Signal System:\n");
    printf("1. Red Light\n");
    printf("2. Yellow Light\n");
    printf("3. Green Light\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("STOP! Red light is ON.\n");
            break;

        case 2:
            printf("READY! Yellow light is ON.\n");
            break;

        case 3:
            printf("GO! Green light is ON.\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
