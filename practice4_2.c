#include <stdio.h>
#include <string.h>

int main(void) {
	char firstName[40],lastName[40];
	int firstLen,lastLen;
	printf("Please input your first name and last name.\n");
	scanf("%s %s",firstName,lastName);
	firstLen=strlen(firstName);
	lastLen=strlen(lastName);
	printf("\"%s %s\"\n",firstName, lastName);
	printf("\"%*s %s\"\n",20-3-lastLen,firstName,lastName);
	printf("\"%s %-*s\"\n",firstName,20-3-firstLen,lastName);
	printf("%*s %s\n",firstLen+3,firstName,lastName);
	
	return 0;
}
