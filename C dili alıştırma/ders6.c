#include <stdio.h>

int main()
{
	int note;
	
	printf("Notunuzu girin: ");
	scanf("%d", &note);
	
	if( note > 60)
	{
		printf("Dersten gectiniz:");
	}
	else
	{
		printf("Dersten kaldiniz:");
	}
	
	return 0;
}
