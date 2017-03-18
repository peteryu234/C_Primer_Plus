#include <stdio.h>

int main(void) {
	int cup;
	printf("please input the cup: ");
	scanf("%d",&cup);
	printf("pingtuo is %.2f\n",cup/2.0);
	printf("ansi is %d\n",cup * 8);
	printf("spoon is %d\n",cup * 8 * 2);
	printf("tea cup is %d\n", cup * 8 * 2 * 3);
	return 0;
}
