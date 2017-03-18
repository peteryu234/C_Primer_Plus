#include <stdio.h>
#include <string.h>

int main(void){
	char firstName[40],lastName[40];
	int firstLen,lastLen;
	printf("Please input your first name.\n");
	scanf("%s",firstName);
	firstLen = strlen(firstName);
	printf("Please input your last name.\n");
	scanf("%s",lastName);
	lastLen = strlen(lastName);
	printf("%s %s\n",firstName,lastName);
	printf("%*d %*d\n",firstLen,firstLen,lastLen,lastLen);
	printf("%-*d %-*d\n",firstLen,firstLen,lastLen,lastLen);
	return 0;
}
