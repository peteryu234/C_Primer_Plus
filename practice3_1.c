#include <stdio.h>

int main(void) {
	char firstName[40],lastName[40];
	printf("Please input your first name and last name.\n");
	scanf("%s %s",firstName,lastName);
	printf("%s,%s\n",firstName, lastName);
	return 0;
}
