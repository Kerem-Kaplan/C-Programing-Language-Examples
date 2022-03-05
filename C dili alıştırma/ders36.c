#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*
	int i[6]={36,20,841,74,2,14};
	int k,toplam=0;
	float yuzde;
	for(k=0;k<6;k++){
		
		toplam+=i[k];
		
	}

	printf("toplam=%d\n\n",toplam);

	for(k=0;k<6;k++){
		yuzde=((100.000000*i[k])/toplam);
		printf("%d. Sayinin yuzdelik degeri-->%f\n",k+1,yuzde);
	}*/
	
	int a=5,b;
	
	b= ++a + a++ * --a;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	
	return 0;
}
