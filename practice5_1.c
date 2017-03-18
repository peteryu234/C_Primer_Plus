#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void){
	int input,min,hour;
	printf("Please input the minutes.\n");
	scanf("%d",&input);
	
	while(input > 0){
		hour = input / MIN_PER_HOUR;
		min = input % MIN_PER_HOUR;
		printf("You input is %d hour %d minute\n",hour,min);
		printf("Please input another minutes.\n");
		scanf("%d",&input);
	}
	
	return 0;
}
