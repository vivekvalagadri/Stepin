/**
 * @example "This is a try"
 * @defgroup   COMPLEX_CALC complex calculate
 * @file
 * @brief      This file implements complex calculate.
 * @author     Vivek
 * @date       2021
 */

#include <stdio.h>   
#include "./inc/notfun.h"
#include "./unity/unity.h"


void setUp(){}
void tearDown(){}

void zero_test(){
	complex a={0,0},b={0,0},c={0,0};
	TEST_ASSERT_EQUAL(SUCCESS,sum(&c,&a,&b));
	TEST_ASSERT_EQUAL(SUCCESS,difference(&c,&a,&b));
	TEST_ASSERT_EQUAL(SUCCESS,product(&c,&a,&b));
	TEST_ASSERT_EQUAL(ERROR_DIV_BY_ZERO,div(&c,&a,&b));
}
void positive_test(void){
	complex a={1,1},b={1,1},c={2,2};
	TEST_ASSERT_EQUAL(SUCCESS,sum(&a,&b,&c));
	complex f={0,2};
	TEST_ASSERT_EQUAL(SUCCESS,product(&a,&b,&f));
	complex d={0,0};
	TEST_ASSERT_EQUAL(SUCCESS,difference(&a,&b,&d));
	complex e={1,0};
	TEST_ASSERT_EQUAL(SUCCESS,div(&a,&b,&e));
}
void negative_test(){
	complex a={-1,-1},b={-1,-1},c={-2,-2};
	TEST_ASSERT_EQUAL(SUCCESS,sum(&a,&b,&c));
	complex d={0,0};
	TEST_ASSERT_EQUAL(SUCCESS,difference(&a,&b,&d));
	complex e={0,2};
	TEST_ASSERT_EQUAL(SUCCESS,product(&a,&b,&e));
	complex f={1,0};
	TEST_ASSERT_EQUAL(SUCCESS,div(&a,&b,&f));
}
void NULL_test(){
	TEST_ASSERT_EQUAL(ERROR_NULL_PTR,sum(NULL,NULL,NULL));
	TEST_ASSERT_EQUAL(ERROR_NULL_PTR,difference(NULL,NULL,NULL));
	TEST_ASSERT_EQUAL(ERROR_NULL_PTR,product(NULL,NULL,NULL));
	TEST_ASSERT_EQUAL(ERROR_NULL_PTR,div(NULL,NULL,NULL));
}
int main(){
	UNITY_BEGIN();
	RUN_TEST(zero_test);
	RUN_TEST(positive_test);
	RUN_TEST(negative_test);
	RUN_TEST(NULL_test);
	return UNITY_END();
}