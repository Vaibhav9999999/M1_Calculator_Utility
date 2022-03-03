#include "calculator.h"

int main()
{
    // declaration a local variable op;
    float num1, num2,num3, result = 0.0f;
    int op;
    
        // displays you the multiple operations of the C Calculator
        printf(" Select an operation to perform the calculation in C Calculator: \n");
        printf("1 Addition\n");
        printf("2 Subtraction\n");
        printf("3 Multiplication\n");
        printf("4 Division\n");
        printf("5 Square\n");
        printf("6 Percentage\n");
        printf("7 Exit\n");
        printf("Make a choice\n");

        /* Input two number and operator from user */
        scanf("%d", &op);

        // use switch statement to call an operation
        switch (op)
        {
        case 1:
            printf("Enter two numbers\n");
            scanf("%f  %f", &num1, &num2);

            result = addition(num1, num2); /* It call the addition() function  to add the given numbers */
            break;                         // break the function

        case 2:
            printf("Enter two numbers\n"); 
            scanf("%f  %f", &num1, &num2);

            result = subtract(num1, num2); /* It call the subtract() function  to add the given numbers */
            break; // break the function

        case 3:
            printf("Enter two numbers\n");
            scanf("%f  %f", &num1, &num2);

            result = multiply(num1, num2); /* It call the multiply() function  to add the given numbers */
            break; // break the function

        case 4:
            printf("Enter two numbers\n");
            scanf("%f  %f", &num1, &num2);

            result = divide(num1, num2);  /* It call the divide() function  to add the given numbers */
            break; // break the function

        case 5:
            printf("Enter a number\n");
            scanf("%f", &num1);

            result = square(num1);         /* It call the square() function  to add the given numbers */
            break; // break the function

        case 6:
            printf("Enter a number\n");
            scanf("%f", &num1);

            result = percentage(num1);     /* It call the percentage() function  to add the given numbers */
            break; // break the function

        case 7:
            exit(0); // It call the exit() function  to exit from the program
            break;   // break the function

        default:
            printf(" Something is wrong!! ");
            break;
        }
        printf("%.2f", result);
 
        printf(" \n \n ********************************************** \n ");

    return 0;
}
