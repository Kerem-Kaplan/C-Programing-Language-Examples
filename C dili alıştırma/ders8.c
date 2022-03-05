#include <stdio.h>

int main()
{
	int vize1, vize2, final;
	float okulortalama;
	float dersort;
	
	printf("1.Vize:");
	scanf("%d", &vize1);
	
	printf("2.Vize:");
	scanf("%d", &vize2);
	
	printf("Final:");
	scanf("%d", &final);
	
	printf("Universite ortalamnizi girin: :");
	scanf("%f", &okulortalama);
	
	dersort = (vize1*3/10.0) + (vize2*3/10.0) + (final*4/10.0);
	
	if (dersort >= 90)
	{
		printf("Harf notunuz - AA ve Ders ortalamaniz : %f\n", dersort);
	}
	
	else if(dersort >= 85 && dersort < 90)
	{
		printf("Harf notunuz - AB ve Ders ortalamaniz : %f\n", dersort);
	}
	
	else if(dersort >= 80 && dersort < 85)
	{
		printf("Harf notunuz - BB ve Ders ortalamaniz : %f\n", dersort);
	}
	
	else if (dersort >= 75 && dersort < 80)
	{
		printf("Harf notunuz - CB ve Ders ortalamaniz : %f\n", dersort);
	}
	
	else if(dersort >= 70 && dersort < 75)
	{
		printf("Harf notunuz - CC ve Ders ortalamaniz : %f\n", dersort);
		if (okulortalama < 2.5)
		{
			printf("Dersin tekrar alman yararli olur cunku ortalaman dusuk\n");
		}
	}
	else if(dersort >= 65 && dersort < 70 )
	{
		printf("Harf notunuz - DC ve Ders ortalamaniz : %f\n", dersort);
		if (okulortalama < 2.5)
		{
			printf("Dersi tekrar almanda yarar var cunku notun dusuk\n");
		}
	}
	else if(dersort >= 60 && dersort < 65 )
	{
		printf("Harf notunuz - DD ve Ders ortalamaniz : %f\n", dersort);
		if (okulortalama < 2.5)
		{
			printf("Dersi tekrar almanda yarar var cunku notun dusuk\n");
		}
	}
	else
	{
		printf("Harf Notunuz - FF ve Ders ortalamaiz : %f\n", dersort);
		printf("Dersten Kaldiniz");
	}	
	
	return 0;
}
