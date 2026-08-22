// Write a program to implement a basic calculator using switch-case for +, -, *, /, %

#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

 
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator)
     {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case '%':
           
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Modulus by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error! Invalid operator entered.\n");
            break;
    }

    return 0;
}
