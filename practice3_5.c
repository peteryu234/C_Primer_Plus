#include <stdio.h>
#define SECOND_IN_YEAR 3.156e7

int main(void) {
	int age;
	double second;
	printf("please input your age: ");
	scanf("%d",&age);
	second = age * SECOND_IN_YEAR;
	printf("you have lived %.2f seconds.\n",second);
	return 0;
}
