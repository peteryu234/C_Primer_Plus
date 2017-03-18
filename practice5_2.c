#include <stdio.h>

int main(void){
	int input,max;
	printf("Please input an int.\n");
	scanf("%d",&input);
	max = input + 10;
	while(input <= max){
		printf("%d ",input);
		input++;
	}
	printf("\n");
	return 0;
}
