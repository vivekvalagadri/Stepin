#include "../inc/notfun.h"
#include <stdio.h>

error_t sum(complex *cnum1,complex *cnum2, complex *csum){
	if(cnum1==NULL || cnum2==NULL || csum==NULL)
		return ERROR_NULL_PTR;
	else if(csum->real==cnum1->real+cnum2->real && csum->imaginary==cnum1->imaginary+cnum2->imaginary)
		return SUCCESS;
	else
		return UNDEF_ERROR;
}

error_t difference(complex *cnum1,complex *cnum2, complex *cdiff){
		if(cnum1==NULL || cnum2==NULL || cdiff==NULL)
		return ERROR_NULL_PTR;
	else if(
	cdiff->real==cnum1->real-cnum2->real && 
	cdiff->imaginary==cnum1->imaginary-cnum2->imaginary)
		return SUCCESS;
	else
		return UNDEF_ERROR;
}

error_t product(complex *cnum1,complex *cnum2, complex *cprod){
	if(cnum1 == NULL || cnum2 == NULL || cprod==NULL)
		return ERROR_NULL_PTR;
	else if(
    cprod->real == cnum1->real*cnum2->real - cnum1->imaginary*cnum2->imaginary &&
    cprod->imaginary == cnum1->real*cnum2->imaginary + cnum1->imaginary*cnum2->real)
    return SUCCESS;
	else
		return UNDEF_ERROR;
}

error_t div(complex *cnum1,complex *cnum2, complex *cquo){
	if(cnum1 == NULL || cnum2== NULL || cquo==NULL)
		return ERROR_NULL_PTR;
    if(cnum2->real==0 && cnum2->imaginary==0)
    	return ERROR_DIV_BY_ZERO;

    float real_numerator = (cnum1->real * cnum2->real) + (cnum1->imaginary * cnum2->imaginary);
    float denominator= (cnum2->real*cnum2->real) + (cnum2->imaginary * cnum2->imaginary);

    float imag_numerator = (cnum1->imaginary * cnum2->real) - (cnum1->real * cnum2->imaginary);

    if(cquo->real ==real_numerator / denominator &&
    cquo->imaginary == imag_numerator/denominator)
    	return SUCCESS;
    else 
    	return UNDEF_ERROR;


}