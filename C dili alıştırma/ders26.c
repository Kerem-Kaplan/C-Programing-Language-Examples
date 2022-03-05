#include <stdio.h>
const float PI= 3.14159;

int main()
{

	float r, cap, cevre, alan;
 	
 	printf("Yaricapini giriniz: ");
 	scanf("%f", &r);
	//cap=2*r; 
	//cevre=2*PI*r;	
 	//alan=PI*r*r;
 	
 	printf("dairenin capi: %f\n", 2*r);
 	printf("dairenin alani: %f\n", PI*r*r);
 	printf("dairenin cevresi: %f\n", 2*PI*r);
 	
 	return 0;
}
