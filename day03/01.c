#include <stdio.h>
#define PI 3.14

//변수의 선언
int main(void) {

	int num1 = 10;
	int num2 = 3;

	double result;

	result = num1 + num2;
	// 묵시적 형변환 double > int

	result = (double)num1 + (double)num2;
	//명시적 형변환

	printf("%lf\n", result);


	return 0;
}