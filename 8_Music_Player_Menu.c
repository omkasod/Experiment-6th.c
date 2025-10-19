#include <stdio.h>

int main() {
    int option;
    printf("Music Player: \n");
    printf("1. Play\n");
      printf("2. Pause\n");
        printf("3. Stop\n");
          printf("Enter your choice: \n");
    scanf("%d", &option);

    switch(option) {
        case 1: 
            printf("Music Playing...\n"); 
                    break;
        case 2:
            printf("Music Paused.\n");
                 break;
        case 3: 
            printf("Music Stopped.\n"); 
                break;
        default:
             printf("Invalid choice!\n");
    }

    return 0;
}
