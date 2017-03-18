#include <stdio.h>

void lifang(double d);

int main(void)
{
	float input;
	
	printf("Please input: ");
	scanf("%f",&input);
	lifang(input);
	
	return 0;
}

void lifang(double d){
	double result;
	result = d * d * d;
	printf("result is %.2f\n",result);
}
