#include "calculator.h"

int main()
{
    // declaration a local variable op;
    int output;
    do
    {
        // displays the multiple operations of the C Calculator
        printf(" Please choose which function do you want to perform:\n ");
        printf("1 Addition  \n 2 Subtraction \n 3 Multiplication \n 4 Division \n 5 Square \n 6 Exit \n Please, Make a choice from these\n ");

        scanf("%d", &output); // This will accepts a input to choose the operation

        // Here use switch statement to call an operation
        switch (output)
        {
        case 1:
            addition(); // It will call the addition() function  to add the given numbers
            break;      // break the function

        case 2:
            subtract(); // It will call the subtract() function  to subtract the given numbers
            break;      // break the function

        case 3:
            multiply(); // It will call the multiply() function  to multiply the given numbers
            break;      // break the function

        case 4:
            divide(); // It will call the divide() function  to divide the given numbers
            break;    // break the function

        case 5:
            sq();  // It will call the sq() function  to get the square of given numbers
            break; // break the function

        case 6:
            exit(0); // It will call the exit() function  to exit from the program
            break;   // break the function

        default:
            printf("PLEASE USE VALID OPERATION !!! ");
            break;
        }
        printf(" \n \n ________________________________________ \n ");
    } while (output != 6);

    return 0;
}
