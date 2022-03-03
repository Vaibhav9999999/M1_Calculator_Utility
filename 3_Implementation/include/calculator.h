/**
 * @file calculator.h
 * @author vaibhav ()
 * @brief 
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Header Guard

#ifndef Calculator_h_
#define Caculator_h_

// Include files 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Structure declareation
float addition(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float square(float num3);
float percentage(float num3);
void exit();

// Function Prototype

/**
 * @brief add two no
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float addition(float num1, float num2);


/**
 * @brief subtarct two no
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float subtract(float num1, float num2);


/**
 * @brief multiply two no
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float multiply(float num1, float num2);


/**
 * @brief divide two no
 * 
 * @param num1 
 * @param num2 
 * @return float 
 */

float divide(float num1, float num2);


/**
 * @brief square a no
 * 
 * @param num3 
 * @return float 
 */

float square(float num3);


/**
 * @brief percenatage of a no
 * 
 * @param num3 
 * @return float 
 */

float percentage(float num3);




#endif