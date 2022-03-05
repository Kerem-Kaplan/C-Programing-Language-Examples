#include <stdio.h>

int main()
 {
	int vize1, vize2, final;
	float dersort;
	
	printf("1. vize notunuzu girin:");
	scanf("%d", &vize1);
	
	printf("2. vize notunuzu girin:");
	scanf("%d", &vize2);
	
	printf("final notunuzu girin:");
	scanf("%d", &final);
	
	dersort = (vize1 + vize2 + final)/3.0;
	
	
	if(dersort > 60)
	{
		printf("Dersten gectinizz!!!");
	}
	
	else if (dersort > 50)
	{
		printf("Bute kaldiniz!!!");
	}
	
	else
	{
		printf("Dersten kaldiniz!!!!!");
	}
 	
 	
 	return 0;
 }
