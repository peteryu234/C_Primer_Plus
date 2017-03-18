#include <stdio.h>

int main(void) {
	void smile(void);
	int i, j;
	
	for (i = 3; i > 0; i--) {
		for (j = i; j > 0; j--) {
			smile();
		}
		printf("\n");
	}
	
	return 0;
}

void smile(void) {
	printf("Smile!");
}
