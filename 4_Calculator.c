#include<stdio.h>

int main(){
    int a, b;
    char op;
        printf("Enter teo numbers:\n");
        scanf("%d %d", &a, &b);
        printf("Enter operation(+, -, *, /):");
        scanf("%c", &op);


    switch (op){
        
        case '+':
            printf("result = %d\n, a + b");
                break;

        case '-':
            printf("result = %d\n, a - b");
                break;

        case '*':
            printf("result = %d\n, a * b");
                break;

        case '/':
            printf("result = %d\n, a / b");
                break;
        
         default:
            printf("Invalid operation\n");
                break;
    
    }

    return 0;
}