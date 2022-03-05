#include <stdio.h>
#include <math.h>

int main()
{
	printf("This program finds the largest number.\n");
	int counter = 0;
	int x;
	int y = 0;
	while (counter <= 10)
	{
		printf("Enter a number: \n");
		scanf_s("%d", &x);
		if (x > y)
		{
			y = x;
		}
		else
		{
			x = y;
		}
		counter++;
			
	}
	printf("The largest number is %d", x);
	
}
