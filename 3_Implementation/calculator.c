/**
 * @file calculator.c
 * @author vaibhav ()
 * @brief used to calculate simple mathematical problems
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include "calculator.h"  

// function declarations   
int addition();  
int subtract();  
int multiply();  
int divide();  
int sq();   
void exit();  
    
// function definition  

/**
 * @brief add certain no's
 * 
 * @return int 
 */
int addition()  
{  
    int i, sum = 0, num, f_num; // declare a local variable   
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
  
// use subtract() function to subtract two numbers  


  /**
   * @brief // use subtract() function to subtract two numbers   
   * 
   * @return int 
   */
 
int subtract()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);  
}  
  
// use multiply() function to multiply two numbers  

/**
 * @brief // use multiply() function to multiply two numbers
 * 
 * @return int 
 */
int multiply()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, res);  
}  
  
// use divide() function to divide two numbers

/**
 * @brief // use divide() function to divide two numbers
 * 
 * @return int 
 */
int divide()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, res);  
}  
  
// use sq() function to get the square of the given number

/**
 * @brief // use sq() function to get the square of the given number
 * 
 * @return int 
 */

int sq()  
{  
    int n1, res;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &n1);  
      
    res = n1 * n1;    
    printf (" \n The Square of %d is: %d", n1, res);  
} 