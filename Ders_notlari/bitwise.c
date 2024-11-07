#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


// HIZLI KULLANIM İÇİN
#define BAYRAK1 (1<<0) // 0000 0001
#define BAYRAK2 (1<<1) // 0000 0010
#define BAYRAK3 (1<<2) // 0000 0100

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

void BitCheck(){
	// 3. bit 1 mi ?
	// 3. bit ile 1 değeri and lersek 1 ise 1 , 0 ise 0 gelir
	int a = 13; // 0000 1101
				// 0000 1000
				
	if(a & (1<<3)){// 0000 1000
		
		printf("3. bit 1");

	}
	else{
		printf("3. bit 0");
	}
	
	// eğer seçili bit 0 ise , a & (1<<3) = 0000 0000 olur buda 0 yani false
	// eğer 0 değilse zaten true olur

}

void BitToggle(){
	int a = 0b00000000;
	
	a = a ^ (1<<2); // 2. biti tersledim
	
	printf("%d\n",a);
	
	a = a ^ (1<<2); // eski haline getirdim
	
	a = a ^ 0xFF; // tüm bitler teslendi ve FF oldu
	
	printf("%X",a);
	
	
}

int main() {
	
	BitToggle();
	
	return 0;
}
