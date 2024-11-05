#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func1(){
	
	int degisken1 = 7;
	float floatDegisken = 2.45;
	char karakter = 'a';
	
	//printf("%d %f %c",degisken1,floatDegisken,karakter);
	
	printf("%.2f",floatDegisken); // virgülden sonraki basamak sayýsý
	
}

void func2(){
	
	int input;
	
	scanf("%d",&input);
	printf("kullanici girisi : %d",input);
}


void func3(){
	char text[20];
	
	scanf("%20s",text); // string bir array o yüzden array ismi zaten bir adres o yüzden & kullanýlmaz
	
	printf("%s",text); // s20 yaparsak 20 kakarter girmediðmiz sürece baþýna boþluk ekler
	
	
}


void func4(){
	
	int a = 10;
	
	float b = (float)a;
	
	printf("%f",b);
	
}


int main() {
	
	func4();
	
	
	
	return 0;
}
