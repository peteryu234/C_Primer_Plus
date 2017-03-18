#include <stdio.h>
#define CM_PER_INCH 2.54
#define IN_PER_FOOT 12

int main(void){
	int foot;
	float input, inch_total,inch;
	printf("Enter a height in centimeters: ");
	scanf("%f",&input);
	
	while(input > 0){
		inch_total = input / CM_PER_INCH;
		foot = (int)(inch_total / IN_PER_FOOT);
		inch = inch_total - foot * IN_PER_FOOT;
		printf("%.1f cm = %d feet, %.1f inches\n",input, foot, inch);
		printf("Enter a height in centimeters (<=0 to quit): ");
		scanf("%f",&input);
	}
	printf("bye\n");
	return 0;
}
