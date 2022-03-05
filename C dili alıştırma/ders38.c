#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,i,j;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
			
		printf("\n");
	}
	
	for(i=a;i>0;i--){
		for(j=i-1;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
