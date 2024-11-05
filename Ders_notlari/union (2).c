#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

union DonanimKaydi{ // union içinde tek bir veri tutar
	
	uint32_t tamSayi; // 32 bitlik kayda doğrudan erişim
	
	struct {
		unsigned int bit0 : 1; // 1 bit
		unsigned int bit1 : 1;
		unsigned int bit2 : 1;
		unsigned int bit3 : 1;
		unsigned int bit4 : 1;
		unsigned int bit5 : 1;
		unsigned int bit6 : 1;
		unsigned int bit7 : 1;
		unsigned int bit8 : 1;
		unsigned int bit9 : 1;
		unsigned int bit10 : 1;
		unsigned int bit11 : 1;
		unsigned int bit12 : 1;
		unsigned int bit13 : 1;
		unsigned int bit14 : 1;
		unsigned int bit15 : 1;
		unsigned int reserve : 16;
		
	} bitler; // kayıtlara erişmek için struct atandı bitler isimli
	
};

int main() {
	
	union DonanimKaydi kayit;
	
	// kayda tam sayi olarak yazma
	kayit.tamSayi = 0x5F2A; // 0XA == 0b1010
	
	printf("%X \n",kayit.tamSayi); // hexadeciaml için %x , unsigned int için %u
	
	printf("%u",kayit.bitler.bit15);
	printf("%u",kayit.bitler.bit14);
	printf("%u",kayit.bitler.bit13);
	printf("%u ",kayit.bitler.bit12);
	printf("%u",kayit.bitler.bit11);
	printf("%u",kayit.bitler.bit10);
	printf("%u",kayit.bitler.bit9);
	printf("%u ",kayit.bitler.bit8);
	printf("%u",kayit.bitler.bit7);
	printf("%u",kayit.bitler.bit6);
	printf("%u",kayit.bitler.bit5);
	printf("%u ",kayit.bitler.bit4);
	printf("%u",kayit.bitler.bit3);
	printf("%u",kayit.bitler.bit2);
	printf("%u",kayit.bitler.bit1);
	printf("%u",kayit.bitler.bit0);
	
	
	
	
	return 0;
}
