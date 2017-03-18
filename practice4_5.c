#include <stdio.h>

int main(void) {
	float speed,size,time;
	printf("please input Mb/s speed and MB file size.\n");
	scanf("%f %f",&speed, &size);
	time = size * 8 / speed;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size);
	printf("downloads in %.2f seconds.\n",time);
	return 0;
}
