/**
 * @file factors.h
 * @author Supriya Pudi
 * @brief Header file for Calculating factors and factorial
 *
 */

#ifndef _FACTORS_H_
#define _FACTORS_H_

#include <stdio.h>

/**
* @brief Finds lcm and returns the result
* @param[in] n1 
* @param[in] n2
* @return Result of lcm of n1 and n2
*/
int lcm(int n1,int n2);

/**
* @brief Finds hcf and returns the result
* @param[in] n1 
* @param[in] n2 
* @return Result of hcf of n1 and n2
*/
int HCF(int n1,int n2);

/**
* @brief Finds gcd and returns the result
* @param[in] n1 
* @param[in] n2 
* @return Result of gcd of n1 and n2
*/
int gcd(int n1,int n2);

/**
* @brief Finds the factorial and returns the result 
* @param[in] n 
* @return Result of factorial of n
*/
int factorial(int n);

#endif  /* #define FACTORS_H */




