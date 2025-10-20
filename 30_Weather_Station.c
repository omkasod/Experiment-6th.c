#include <stdio.h>

int main() {
    int choice;

    printf("Weather Station:\n");
    printf("1. Show Temperature\n");
    printf("2. Show Humidity\n");
    printf("3. Show Wind Speed\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Current Temperature: 29°C\n");
            break;

        case 2:
            printf("Current Humidity: 70%%\n");
            break;

        case 3:
            printf("Wind Speed: 15 km/h\n");
            break;

        default:
            printf("Invalid choice! Enter 1-3.\n");
    }
    return 0;
}
