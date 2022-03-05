/*
#include <conio.h>
#include <math.h>
char turan(char a){
 
scanf("%c",&a);
 
return a;
}
 
int main(){
int b,c,d,e;
char a;
char i;
i=turan(a);
printf("iki sayi giriniz\n");
scanf("%d",&b);
scanf("%d",&c);
 
if(i=='+'){
 
d=b+c;
 
printf("%d",d);
 
}
 
else if(i=='-'){ d=b-c;
 
printf("%d",d);
 
}
 
else if(i=='*'){ d=b*c;
 
printf("%d",d);
 
}
else if(i=='/'){ d=b/c;
 
printf("%d",d);
 
} 
getch ();
 
return 0;
 
} */

/*
#include<stdio.h>//Kütüphanelerimizi ekledik.
#include<conio.h>
#include<stdlib.h>
void f(int n,int *p,int *g)//Yardýmcý bir void fonksiyonumuz.Bu fonksiyonumuzda matematiksel hesaplamalar yapýlýyor.
{ int i;

for(i=0;i<n;i++)//Siz while döngüsüne de alabilirsiniz ama for döngüsü daha kýsa ve basit olur.
{ printf("\n a[%d] : ",i);
scanf("%d",p+i);}

for(i=0;i<n;i++)
{ if( *p <= *(p+i) )
{ *g= i;
*p = *(p+i);
}
}

return;
}
int main()//Ana fonksiyonumuz.
{ int n,*p,r;
printf("\n Dizi kac elemanli olsun? : ");//Ekran çýktýsý.
scanf("%d",&n);
p = (int*)malloc(n*sizeof(int));//Burada malloc kodu kullanýlarak deðerler printer sayesinde yardýmcý fonksiyonumuza ulaþýyor.
if( p == NULL )exit(1);//Eðer ifade boþ olursa çýkýþ yapýlýyor.
f(n,p,&r);

printf("\n %d indisli eleman : %d maximumdur . ",r,*p);//Ekran çýktýmýzý alýrýz.
getch();
return 0; //Ana fonksiyonumuzun sonuna geliriz.
} */

#include <iostream.h>//Kütüphanelerimizi yazýyoruz.
#include <conio.h>

main(){//Ana fonksiyonumuz.
srand(time(NULL));
int sayi=rand()%100;//Burada yukarýda da yazdýðýmýz gibi program 1 ile 100 arasýnda rastgele bir sayý belirliyor.
int istek;

while(sayi){
printf("Uretilen sayiyi tahmin et");
scanf("%d",&istek);//Dýþarýdan tahmin ettiðiniz sayýyý giriyorsunuz.

if(sayi<istek){//Burada if else komutlarýna giriyoruz sonuçta tahmin ettiðiniz sayý doðru olmazsa yukarý yada aþaðý diye program uyarý veriyor ona göre tekrardan sayý giriþi yapýyorsunuz ta ki doðru sayýyý bulana kadar.
printf("asagi\n");
}else if(sayi>istek){
printf("yukari\n");

}else{
printf("Bildiniz %d",sayi);//Sayýyý bildiðinizde bu çýktýyý verecektir.
break;
}
}
getch();
return 0; //Program bitirme kodlarý.
}
