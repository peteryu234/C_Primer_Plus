#include <stdio.h>
int main(void)
{
	int count, total, sum, day;
	
	printf("Please input the days: ");
	scanf("%d",&day);
	count = 0;
	sum = 0;
	while (count++ < day) {
		total = count * count;
		sum = sum + total;
	}
	printf("sum = %d\n", sum);
	
	return 0;
}
