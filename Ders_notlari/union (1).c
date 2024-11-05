#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

union Veri{
	
	uint16_t tamSayi;
	
	struct { // adres - mesaj - ID - reserve   32 bitlik veri
		
		unsigned int reserve:6; // sağdaki 6 bit , en değersiz bit tarafı
		unsigned int gonderenAdres:8;
		unsigned int mesaj:16;
		unsigned int aliciAdres:2;
		
	}bytler;
};


int main() {
	
	union Veri veri1;
	
	veri1.bytler.gonderenAdres = 0xFD;
	veri1.bytler.mesaj = 14589;
	veri1.bytler.aliciAdres = 0x03;
	
	printf("verimdeki mesaj : %d\n",veri1.bytler.mesaj);
	printf("verimdeki tam deger : %X\n",veri1.bytler);
	printf("verimdeki reserve bolum : %d - %X\n",veri1.bytler.reserve,veri1.bytler.reserve);
	printf("verimdeki alici adres : %d %X\n",veri1.bytler.aliciAdres,veri1.bytler.aliciAdres);
	printf("verimdeki gonderici adres : %d %X\n",veri1.bytler.gonderenAdres,veri1.bytler.gonderenAdres);
	
	return 0;
}
