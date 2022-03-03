/**
 * @file calculator.c
 * @author Vaibhav ()
 * @brief 
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include"calculator.h"

// function declarations
float addition(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float square(float num3);
float percentage(float num3);
void exit();


// function definition

/**
 * @brief Function to add two nos
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */


float addition(float num1, float num2)
{
    return num1 + num2;
}

/**
 * @brief Function to subtract two nos
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */
 
 
float subtract(float num1, float num2)
{
    return num1 - num2;
}

/**
 * @brief Function to multiply two nos
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float multiply(float num1, float num2)
{
    return num1 * num2;
}

/**
 * @brief Function to divide two nos
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float divide(float num1, float num2)
{
    if(num2==0){
        return -1;
    }
    else
    return num1 / num2;
}
/**
 * @brief Function to square a no
 * 
 * @param num1 
 * @return float 
 */

float square(float num1)
{
    return num1 * num1;
}


/**
 * @brief  Function to find percentage of a no
 * 
 * @param num1 
 * @return float 
 */

float percentage(float num1)
{
    return num1 / 100;
}