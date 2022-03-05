#include <stdio.h>
/*
int main()
{
	int i;
	
	i=1;
	while(i <=10)
	{
		printf("%d-Merhaba dunya\n",i);
		
		i++;
	}
	printf("Dongu bitti",i);
	
	return 0;
}  */

int main()
{
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayi giriniz: ");
	scanf("%d", &n);
	
	while(n != 0)
	{
		printf("%d\n", n);
		fact = fact * n;
		
		n--;
	}
	printf("%d\n", fact);
	
	return 0;
}
