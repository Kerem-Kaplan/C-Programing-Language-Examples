/* 
#include <stdio.h>
int topla(int sayia,int sayib){
	
	return (sayia+sayib);
}

int main(){
	
	int sayia;
	int sayib;
	
	scanf("%d %d", &sayia, &sayib);
	printf("%d", topla(sayia,sayib));
}  */


#include <stdio.h>

int faktoriyel(int sayi){
	int fact=1;
	
	for(; sayi>0; sayi--){
		fact *= sayi;
	}
	
	return fact;
}

int main(){
	int n;
	
	printf("Lutfen faktoriyel sayisini giriniz: ");
	scanf("%d", &n);
	
	printf("Faktoriyel: %d", faktoriyel(n));
}

















