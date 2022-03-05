/*
#include <stdio.h>

int carp(int matris[], int size){
	
	int carpim=1;
	int i=0;
	
	for(; i<size; i++){
		
		carpim *= matris[i];
	}
	
	return carpim;
}

int main(){
	
	int sayilar[6] = {1,2,3,4,5,6};
	
	printf("%d", carp(sayilar,6));
	
	return 0;
} */

#include <stdio.h>

void bastir(int matris[][4], int size){
	int i,j;
	
	for (i=0; i<size; i++){
		for(j=0; j<4; j++){
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
}

int main(){
	
	int matris[4][4];
	int i, j;
	
	printf("Matrisi doldurunuz: ");
	
	for (i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &matris[i][j]);
		}
	}
	printf("\n");
	bastir(matris,4);
}
























