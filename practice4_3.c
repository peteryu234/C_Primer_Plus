#include <stdio.h>

int main(void) {
	float input;
	printf("please input a float.\n");
	scanf("%f",&input);
	printf("the input is %.1f\n",input);
	printf("the input is %.1e\n",input);
	return 0;
}
