#include <stdio.h>

int main()
{
	int i = 1;
	int power = 1;
	int x;
	printf("Write an integer: ");
	scanf_s("%d", &x);
	int y;
	printf("Write an integer: ");
	scanf_s("%d", &y);
	
	while (i <= y)
	{
		power = x * power;
		i++;
	}
	printf("%d", power);
	return 0;
}
