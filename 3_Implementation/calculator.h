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
#include<stdio.h> //

// Structure declareation
int addition();  
int subtract();  
int multiply();  
int divide();  
int sq();   
void exit(); 


// Function Prototype

/**
 * @brief add certain no's and use addition() function to subtract two numbers  
 * 
 * @return int 
 */
int addition() ;



  /**
   * @brief // use subtract() function to subtract two numbers   
   * 
   * @return int 
   */
 
int subtract() ;


/**
 * @brief // use multiply() function to multiply two numbers
 * 
 * @return int 
 */
int multiply()  ;

/**
 * @brief // use divide() function to divide two numbers
 * 
 * @return int 
 */
int divide();

/**
 * @brief // use sq() function to get the square of the given number
 * 
 * @return int 
 */

int sq() ;

#endif