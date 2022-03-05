#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
	int yaricap;
	float hacim;
	
	printf("Yaricapini giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4 / 3.0)*PI*(yaricap*yaricap*yaricap);
	
	printf("Haciminiz: %f dir", hacim);
	
	return 0;
}
