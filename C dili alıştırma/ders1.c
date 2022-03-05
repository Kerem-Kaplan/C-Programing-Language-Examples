#include <stdio.h>

int main()
{
	int a1 = 42;
	char b1 = 66;
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.21;
	printf("%d %c %d %.1f %.2f %s\n", a1, b1, b2, c1, d1,"Yazilim bilimi");
	
	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
	printf("%d byte\n", sizeof(float));
	printf("%d byte\n", sizeof(double));
	
	return 0;
}
