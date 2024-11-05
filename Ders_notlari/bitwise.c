#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void OR(){
	// OR İŞLEMİ
	int a = 5; // 0000 0101
	int b = 3; // 0000 0011
	int sonuc = a | b; // 0000 0111
	
	printf("%d OR %d : %d\n",a,b,sonuc);
	
	sonuc = a | 0xF0; // 1111 0000
					  // 0000 0101
					  
	printf("%d OR 0xF0 : %d\n",a,sonuc); // 1111 0101
	
}

void EXOR(){ // TOGGLE İÇİN KULLANILIR
	// EXOR İŞLEMİ
	int a = 5; // 0000 0101
	int b = 3; // 0000 0011
	int sonuc = a ^ b; 
	printf("%d",sonuc);  // 0000 0110
	
}

void AND(){
	// AND İŞLEMİ
	int a = 5; // 0000 0101
	int b = 3; // 0000 0011
	int sonuc = a & b; 
	printf("%d",sonuc);  // 0000 0001
	
}

void NOT(){
	// NOT İŞLEMİ
	uint8_t a = 5; // 0000 0101
	uint8_t sonuc = ~a; // 1111 1010 
	printf("%X / %d",sonuc,sonuc); 
}

void BitKAYDIRMA(){
	uint8_t a = 0b0011;
	
	uint8_t sonuc = a << 1; // 1 BİT SOLA KAYDIRMA
	
	printf("%d\n",sonuc); // 1100
	
	uint8_t sonuc2 = sonuc >> 1; // 1 BİT SOLA KAYDIRMA
	
	printf("%d\n",sonuc2); // 0011 , EN BAŞATAKİ DEĞRE GERİ GELDİK
	
}

void BitSet(){ // OR İŞELEMİ KULLANILIR
	
	uint8_t a = 0b0101; //  0101  - 5
	uint8_t sonuc = a | 0b1000; // a NIN İLK BİTİNİ SET ETTİM
	printf("%X -> %X\n",a,sonuc); //  1101 - D
	
	// ÖNEMLİ 
	a = 0b00000101;
	printf("%X\n",a);
	a |= (1 << 7);
	printf("%X",a);
	
}

void BitReset(){ // AND KULLANIILIR
	uint32_t a = 5;    // 0000 0101
	a = a & 0b11111011;// 1111 1011 -> SIFIRLAMAK İSTEDİĞİM BİTİN KONUMUNA 0 YAZDIM
	printf("%d",a);    // 0000 0001 -> a NIN 2. BİTİNİ SIFIRLADIM
	
	a = 5;
	a %= ~(1 << 2); // YUKARDAKİ İŞLEMİN KISA HALİ
	// (1 << 2)  -> 0000 0100
	// ~(1 << 2) -> 1111 1011
}

int main() {
	
	BitReset();
	
	return 0;
}
