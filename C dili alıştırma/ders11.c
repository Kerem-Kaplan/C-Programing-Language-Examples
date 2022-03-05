#include <stdio.h>

int main()
{
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf(" Islemler\n\n 1:Para cekme\n 2:Para yatirma\n 3:Havale\n 4:Bakiye sorgulama\n 5:Kart Iade\n\n\n");
	
	printf("Islemi seciniz:");
	scanf("%d", &islem);
	
	switch(islem)
	{
		case 1:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Cekilecek Tutar:");
			scanf("%d", &tutar);
			if(tutar > bakiye)
			{
				printf("Bakiyeniz Yetersiz\n");
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
			
		case 2:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Yatirilacak Tutar: ");
			scanf("%d", &tutar);
			
			bakiye += tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
			
		case 3:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Havale yapilacak tutar: ");
			scanf("%d", &tutar);
			if(tutar > bakiye)
			{
				printf("Bakiyeniz yetersiz\n");
			}
			
			bakiye -= tutar;
			printf("Bakiyeniz: %d", bakiye);
			break;
			
		case 4:
			printf("Bakiyeniz: %d", bakiye);
			break;
			
		case 5:
			printf("Kart Iade Edildi.\n");
			
		default:
			printf("Bilinmeyen Islem");
			break;
	}
	
	return 0;
}
