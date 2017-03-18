#include <stdio.h>
#include <float.h>

int main(void) {
	float f1;
	double d1;
	f1 = 1.0/3.0;
	d1 = 1.0/3.0;
	printf("float %.6f double %.6f\n",f1,d1);
	printf("float %.12f double %.12f\n",f1,d1);
	printf("float %.16f double %.16f\n",f1,d1);
	return 0;
}
