#include <stdio.h>
#define PI 3.14

//������ ����
int main(void) {

	int num1 = 10;
	int num2 = 3;

	double result;

	result = num1 + num2;
	// ������ ����ȯ double > int

	result = (double)num1 + (double)num2;
	//����� ����ȯ

	printf("%lf\n", result);


	return 0;
}