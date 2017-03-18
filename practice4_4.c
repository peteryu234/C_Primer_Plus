#include <stdio.h>

int main(void) {
	char name[40];
	float height;
	printf("please input your height and name\n");
	scanf("%f %s",&height,name);
	printf("%s, you are %.2f meter tall.\n",name,height/100);
	return 0;
}
