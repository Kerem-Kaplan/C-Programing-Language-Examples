#include <stdio.h>

int main(){
	
	int x=1, carpim=1;
	
	while(x<=10){
		carpim *= x;
		x++;
	}
	printf("%d\n", carpim);
	return 0;
}
