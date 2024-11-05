#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdint.h>
#include <stdbool.h>


void AyMevsim();
int AySiniflandirma();
int Faktoriyel1();
int Faktoriyel2();

int main() {
	setlocale(LC_ALL, "Turkish");
	
	int kullaniciGiririsi;
	
	bool baslatici = true;
	
	while(baslatici){
		int sayi;
		
		printf("1 - Ay Mevsim Hesabý\n2 - Faktoriyel Hesabý\n3 - Çýkýþ\n> ");
		scanf("%d",&kullaniciGiririsi);
		
		switch(kullaniciGiririsi){
			case 1:
				AyMevsim();
				break;
			case 2:
				printf("Sayý > ");
				scanf("%d",&sayi);
				printf("%d %d\n",Faktoriyel1(sayi),Faktoriyel2(sayi));
				break;
			case 3:
				baslatici = false;
				break;
		}
		
	}

	return 0;
}


int AySiniflandirma(int ayNumarasi){
	
	if (ayNumarasi<=2 && ayNumarasi >=12){ // Kýþ
		return 1;
	}
	else if(ayNumarasi<=5 && ayNumarasi >=3){ // Ýlkbahar
		return 2;
	} 
	else if(ayNumarasi<=8 && ayNumarasi >=6){ // Yaz
		return 3;
	} 
	else if(ayNumarasi<=11 && ayNumarasi >=9){ // Sonbahar
		return 4;
	} 
	
	
	return 1;
}

void AyMevsim(){
	
	int ayNumarasi,mevsim;

	printf("Kaçýncý ayýn mevsimini öðrenmek istersiniz > ");
	
	while(1){
		scanf("%d",&ayNumarasi);
		if (ayNumarasi<1 || ayNumarasi>12){
			printf("Geçersiz ay numarasý girdiniz Tekrar deneyiniz > ");
		}
		else{
			break;
		}
	}
	
	mevsim = AySiniflandirma(ayNumarasi);
	
	switch(mevsim){
		case 1: 
			printf("Kýþ\n");
			break;
		case 2: 
			printf("Ýlkbahar\n");
			break;
		case 3: 
			printf("Yaz\n");
			break;
		case 4: 
			printf("Sonbahar\n");
			break;
	}
		
}


int Faktoriyel1(int sayi){
	
	if (sayi <= 1){
		return 1;
	}
	
	else{
		return sayi * Faktoriyel1(sayi-1);
	}

}

int Faktoriyel2(int sayi){
	
	int sonuc = 1;
	
	while(1){
		if (sayi <= 1){
			break;
		}
		else{
			sonuc = sonuc * sayi;
			sayi--;
		}
	}
	
	return sonuc;
}
