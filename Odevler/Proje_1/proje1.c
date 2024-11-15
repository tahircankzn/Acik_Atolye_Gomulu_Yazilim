# Written by Tahir Can Kozan

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <time.h>

int puan_hesapla(int tahmin_sayisi);

int main() {
	setlocale(LC_ALL, "Turkish");
	
	srand(time(NULL));
    int sayi = rand() % 100 + 1;
    
	int tahmin;
	int tahmin_sayisi = 0;
	
	bool exit = true; // tekrar oynama ve ��k�� ekran�nna kullan�c�n�n yanl�� de�er girmesinde d�ng�ye sokmak i�in
	bool exit2 = true; // ana oyun d�ng�s� i�in
	
	while(exit2){
		
		printf("�retilen Say�y� Tahmin edin\n> ");
		
		
		while(true){
			scanf("%d",&tahmin);
			if(tahmin > 100 || tahmin < 0){
				printf("0 - 100 aras�nda bir tahminde bulunun\n> ");
			}
			else{
				break;
			}
		}
		
		tahmin_sayisi +=1;
		
		if(tahmin > sayi){
			printf("Daha d���k bir say� tahmin edin\n> ");
		}
		else if(tahmin < sayi){
			printf("Daha b�y�k bir say� tahmin edin\n> ");
			
		}
		else{
			printf("Tebrikler do�ru tahmin | %d say�s�n� %d tahminde do�ru buldunuz | PUAN : %d\n-----------\nTekrar oynamak i�in -> 1\n��kmak i�in -> 2\n> ",sayi,tahmin_sayisi,puan_hesapla(tahmin_sayisi));
			while(exit){
				scanf("%d",&tahmin);
				if(tahmin == 1){ // tekrar
					exit = false;
					sayi = rand() % 100 + 1;
					tahmin_sayisi = 0;
					
				}
				else if(tahmin == 2){// ��k��
					exit = false;
					exit2 = false;
				}
				else{
					printf("Ge�ersiz i�lem yap�ld� tekrar deneyin\n> ");
				}
			}
			exit = true;	
		}	
	}
	
	return 0;
	
}


int puan_hesapla(int tahmin_sayisi){
	
	if(tahmin_sayisi <= 5){
		return 100;
	}
	else if(tahmin_sayisi <= 6){
		return 90;
	}
	else if(tahmin_sayisi <= 7){
		return 80;
	}
	
	else if(tahmin_sayisi <= 8){
		return 70;
	}
	
	else if(tahmin_sayisi <= 9){
		return 60;
	}
	
	else if(tahmin_sayisi <= 10){
		return 50;
	}
	
	else if(tahmin_sayisi >= 11){
		return 0;
	}
	
}
