#include <stdio.h>
int main(void)
{
	int count, sum, day;
	
	printf("Please input the days: ");
	scanf("%d",&day);
	count = 0;
	sum = 0;
	while (count++ < day)
		sum = sum + count;
	printf("sum = %d\n", sum);
	
	return 0;
}
