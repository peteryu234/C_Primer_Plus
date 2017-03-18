#include <stdio.h>
#define DAYS_PER_WEEK 7

int main(void){
	int input,day,week;
	printf("Please input the days.\n");
	scanf("%d",&input);
	
	while(input > 0){
		week = input / DAYS_PER_WEEK;
		day = input % DAYS_PER_WEEK;
		printf("%d days are %d weeks, %d days.\n",input,week,day);
		printf("Please input another days.\n");
		scanf("%d",&input);
	}
	
	return 0;
}
