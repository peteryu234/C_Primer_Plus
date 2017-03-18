#include <stdio.h>

int main(void) {
	double weight = 3.0e-23;
	int input;
	double number;
	printf("input how much water: ");
	scanf("%d",&input);
	number = input * 950 / weight;
	printf("total fenzi is %.2f\n",number);
	return 0;
}
