#include <stdio.h>

int main(){
	
	char isim[20];
	char soyisim[20];
	printf("Isminizi ve Soyisminizi Giriniz: ");
	
	scanf("%s\n", &isim);
	scanf("%s", &soyisim);
	
	printf("Isminizi ve Soyisminizi Giriniz: %s %s", isim , soyisim );
	
	return 0;	
}
