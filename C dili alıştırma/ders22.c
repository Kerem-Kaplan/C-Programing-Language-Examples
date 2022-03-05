#include <stdio.h>
void hatayibas(int hata){
	printf("Hata kodu %d", hata);
}

int main(){
	int sayi;
	
	printf("Lutfen negatif olmayan bir sayi girin: ");
	scanf("%d", &sayi);
	
	if(sayi<0){
		hatayibas(404);
	}
	
	else{
		printf("Tebrikler!!!");
	}
	
	return 0;
}
