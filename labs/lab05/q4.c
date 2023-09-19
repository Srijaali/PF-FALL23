#include <stdio.h>
#include <math.h>

int main() { 
            int op1,op2;
            char operation;

            printf("Enter op1: ");
            scanf("%d", &op1);
            printf("Enter op2: ");
            scanf("%d", &op2);
            printf("Enter any operation (+,-,/,*): ");
            scanf(" 5%c", &operation);

            switch (operation) {

                case '+' :
                printf("Addition of numbers is: %d", op1+op2);
                break;

                case '-' :
                printf("Subtraction of number is: %d", op1-op2);
                break;

                case '/' :
                printf("Division of numbers is: %d", op1/op2);
                break;

                case '*' :
                printf("Multiplication of numbers is: %d", op1*op2);
                break;

                default :
                printf("Choose the Right Operation!");

            }
            
            return 0;


}
