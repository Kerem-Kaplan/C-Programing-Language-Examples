#include <stdio.h>

int main(){
	int a;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("Cift sayidir!!!");
	}
	else{
		printf("Tek sayidir");
	}
	
	return 0;
}
