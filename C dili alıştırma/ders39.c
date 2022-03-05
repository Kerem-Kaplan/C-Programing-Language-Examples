#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*int k=50;
	int *pk;
	
	
	pk= &k;
	
	printf("Degeri=%d\n",k);
	printf("Adresi=%p\n",&k);
	printf("Adresi=%p",pk);*/
	
	
	/*char x;
	
	x ='a';
	printf("%d\n",x);
	printf("%c\n",x);
	
	x +=5;
	printf("%d\n",x);
	printf("%c\n",x);
	
	printf("Gulen yuz: %c\n",5);*/
	
	time_t t;
	struct tm *zaman_bilgisi;
	
	t = time(NULL);
	zaman_bilgisi=localtime(&t);
	
	printf("Tarih ve saat %s",asctime(zaman_bilgisi));
	
	return 0;
}
