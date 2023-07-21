#include<stdio.h>    
#include<stdlib.h>  

int main(){  

	
	printf("********SAYILARIN YAZIYLA YAZILIMI********\n\n\n");
	

	//daha buyuk sayiyi tanimlayabilmesi icin long int fonksiyonunu kullanildi.
long int sayi,a=0,b;      
printf("Lutfen bir sayi giriniz:\n\n");    
scanf("%ld",&sayi);    
while(sayi>0)   
{    
b=sayi%10;    
a=a*10+b;    
sayi=sayi/10;    
}
   //kullanicidan bir sayi alinir ve algoritma basamaklarina ayrilan sayinin rakamlarini tanimlar 
sayi=a;   
while(sayi>0)    
{    
b=sayi%10;    
//girilen deger 0 dan buyuk ise dongu baslar
switch(b)    
{    
case 1:    
	printf("bir ");    
	break;    
case 2:    
	printf("iki ");    
	break;    
case 3:    
	printf("uc ");    
	break;    
case 4:    
	printf("dort ");    
	break;    
case 5:    
	printf("bes ");    
	break;    
case 6:    
	printf("alti ");    
	break;    
case 7:    
	printf("yedi");    
	break;    
case 8:    
	printf("sekiz ");    
	break;    
case 9:    
	printf("dokuz ");    
	break;    
case 0:    
	printf("sifir ");    
	break;    
default:    
	printf("Sayi bulunamadi. TEKRAR DENEYINIZ");    
	break;    
}    
sayi=sayi/10;   
//hesaplanan sayiyi tekrar sayi degerine atamak icin kullanilir 
}    
return 0;  
}  
