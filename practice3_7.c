#include <stdio.h>

int main(void) {
	float rate = 2.54;
	float input, result;
	printf("please input your height: ");
	scanf("%f",&input);
	result = input * rate;
	printf("result is %.2f\n",result);
	return 0;
}
