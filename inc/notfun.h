/**
 \file
 */
/**
 * @defgroup   NOTFUN notfun
 * @file
 * @brief      This file implements notfun.
 *
 * @author     Vivek
 * @date       2021
 */
#ifndef __NOTFUN_H__
#define __NOTFUN_H__
/**
 * struct for defining types of errors
 */
typedef enum error_t{
	UNDEF_ERROR=-3,
	ERROR_DIV_BY_ZERO, /**< Division by 0 error */
    ERROR_NULL_PTR,    /**< Null pointer dereferncing error */
    SUCCESS             /**< Compute operation is successful */
	
}error_t;
/**
 * complex number struct
 */
typedef struct {
	float real;
	float imaginary;	
}complex;


/**
 * @brief      calculates sum
 * @file
 * @param      cnum1  The cnum 1
 * @param      cnum2  The cnum 2
 * @param      csum   The csum
 *
 * @return     The error type.
 */
error_t sum(complex *cnum1,complex *cnum2, complex *csum);
/**
 * @brief      calculates difference
 * @file
 * @param      cnum1  The cnum 1
 * @param      cnum2  The cnum 2
 * @param      cdiff  The cdiff
 *
 * @return     The error type.
 */
error_t difference(complex *cnum1,complex *cnum2, complex *cdiff);
/**
 * @brief      calculates the product
 * @file
 * @param      cnum1  The cnum 1
 * @param      cnum2  The cnum 2
 * @param      cprod  The cprod
 *
 * @return     The error type.
 */
error_t product(complex *cnum1,complex *cnum2, complex *cprod);
/**
 * @brief      calculates the quotient
 * @file
 * @param      cnum1  The cnum 1
 * @param      cnum2  The cnum 2
 * @param      cquo   The cquo
 *
 * @return     The error type.
 */
error_t div(complex *cnum1,complex *cnum2, complex *cquo);
#endif
