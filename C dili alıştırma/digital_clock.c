#include <stdio.h>
#include <conio.h>
#define clrscr()
void main(){
	
	int h=0,m=0,s=0;
	double i;
	
	clrscr();
	printf("Lutfen zaman formati girin: HH:MM:SS");
	scanf("%d%d%d", &h, &m, &s);
	start: 
	
	for(h; h<24; h++){
		
		for(m; m<60; m++){
			
			for(s;s<60; s++){
				clrscr();
				printf("\n\n\t\t%d%d%d",h ,m ,s);
				printf("\n\n\t\t Cumartesi 19 Aralik 2020");
				if(h<12){
					printf("AM");
				}
				else{
					printf("PM");
				}
				for( i=0; i<3619999; i++)
				i++;
				i--;
				
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
getch();
}
