#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265   // global olarak pi degerini tan�mlad�m

// fonksiyon tanimlama k�sm�
float kosinus(int sayi1);
float sinus(int sayi1);
float tanjant(int sayi1);
float usAlma(int sayi1,int sayi2);
int coklu_carpma(int sayi1);
int coklu_toplama(int sayi1);
int kalan(int sayi1,int sayi2);
int topla(int sayi1,int sayi2);
int cikarma(int sayi1,int sayi2); 
int bol(int sayi1,int sayi2);
int carpma(int sayi1,int sayi2);
int mutlakDeger(int sayi1);
int maksimum(int sayi1,int sayi2);
int minimum(int sayi1,int sayi2);
void menu();


/////////////////////////////////////////// MA�N FONKS�YONU ////////////////////////////////////

int main() {
	
	int choice,sayi1,sayi2; // ugulamada kullan�lacak 3 temel de�i�ken  - se�enek - 1. sayi - 2.sayi -
	int menu_counter = 0; // ilk a��l��tan sonra kullan�c�ya menuyu tekrar ekrana yazd�rabilmesi i�in bilgilendirme vermesini sa�lad�m
	int durdurucu = 1;      // d�ng�y� �al��t�rmak i�in True de�erine e�it olan bir de�er tan�mland� 
							// e�er d�ng� i�inde bu de�er "0" ' a e�itlenirse d�ng� durur
	
	menu();  // uygulama aray�z�n� bir fonksiyon kullanarak ca��rd�m
	
	do{
		if (menu_counter != 0)
		{
			// ilk a��l��ta menu_counter 0 oldu�u i�in bu k�s�m �al��mayacak , kullan�c� i�lem yapt�ktan sonra bu de�i�ken 1 olucak ve men�y� tekrar erkana getirebilmesi i�in bilgilendirme mesaj� ekrana yaz�lacak
			printf("Menu'yu acmak icin 15 girin\n");
		}
		printf("\nislem numarasini giriniz : \n");
		printf("> ");
		scanf("%d",&choice);
		switch (choice){
			
			// TOPLAMA ��LEM�
			case 1 :
				{
					printf("toplanicak degerleri giriniz : \n1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",topla(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// �IKARMA ��LEM�
			case 2 :
				{
					printf("cikarilacak degerleri giriniz : \n1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",cikarma(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// �ARPMA ��LEM�
			case 3 :
				{
					printf("carpilacak degerleri giriniz : \n1. sayi : ");
					scanf("%d",&sayi1);
					printf("2.sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",carpma(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// B�LME ��LEM� 
			case 4 :
				{
					printf("bolunen sayi : ");
					scanf("%d",&sayi1);
					printf("bolen sayi : ");
					scanf("%d",&sayi2);
					if(sayi2==0)
					{
						printf("tanimsiz durum\n");
						break;
					}
					else
					{
						printf("sonuc : %d\n",bol(sayi1,sayi2));
						printf("\n");
						break;
					}
					
				}
					
			// MUTLAK DE�ER HESABI
			case 5 :
				{
					printf("mutlak degerini bulmak istediginiz sayiyi giriniz : ");
					scanf("%d",&sayi1);
					printf("sonuc : %d",mutlakDeger(sayi1));
					printf("\n");
					break;
				}
				
			// MAKS�MUM DE�ER� BULMA
			case 6 :
				{
					printf("Maksimum deger bulma\n");
					printf("1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",maksimum(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// M�N�MUM DE�ER� BULMA
			case 7 :
				{	
					printf("Minimum deger bulma\n");
					printf("1. sayi : ");
					scanf("%d",&sayi1);
					printf("2. sayi : ");
					scanf("%d",&sayi2);
					printf("sonuc : %d\n",minimum(sayi1,sayi2));
					printf("\n");
					break;
				}
				
			// KALAN BULMA
			case 8 : 
				{
					printf("bolunen sayiyi giriniz : ");
					scanf("%d",&sayi1);
					printf("bolen sayiyi giriniz : ");
					scanf("%d",&sayi2);
					
					if(sayi2 != 0)
					{
						printf("sonuc : %d\n",kalan(sayi1,sayi2));
						break;
					}
					
					else
					{
						printf("tanimsiz durum\n");
						break;
					}
				}
					
			// �SL� SAY� HESABI
			case 9 : 
				{
					printf("ussu alinacak sayiyi giriniz : ");
					scanf("%d",&sayi1);
					printf("ussu giriniz : ");
					scanf("%d",&sayi2);
					printf("sonuc : %.2f\n",usAlma(sayi1,sayi2));  // float de�erin karakter say�s� k�s�tland� ".2f" ile
					break;
				}
				
			// �OKLU TOPLAMA ��LEM�
			case 10 : 
				{
					printf("coklu toplama icin veri sayinizi giriniz : ");
					scanf("%d",&sayi1); // sayi1 de�i�keni veri say�s� i�in kullan�ld�
					printf("sonuc : %d\n",coklu_toplama(sayi1));
					break;
				}
				
			// �OKLU �ARPMA ��LEM�
			case 11 : 
				{
					printf("coklu carpma icin veri sayinizi giriniz : ");
					scanf("%d",&sayi2); // sayi1 de�i�keni veri say�s� i�in kullan�ld�
					printf("sonuc : %d\n",coklu_carpma(sayi2));
					break;
				}
				
			// TANJANT BULMA
			case 12 : 
				{
					printf("tanjant hesaplamak icin bir deger giriniz : ");
					scanf("%d",&sayi1);
					if(sayi1 % 90 != 0) // KOS�NUS FOKS�YONU KULLANILARAK DE�ER�N 0 OLMA DURUMU �NCELEND� 
					{						   // ��NK� KOS�NUS 0 �SE TANJANT TANIMSIZDIR 
					
											   
						printf("sonuc : %.2f\n",tanjant(sayi1));
						break;
					}
					
					else
					{
						printf("tanimsiz durum\n");
						break;
					}
					
				}
				
			// S�NUS BULMA
			case 13 : 
				{
					printf("sinus hesaplamak icin bir deger giriniz : ");
					scanf("%d",&sayi1);
					printf("sonuc : %.2f\n",sinus(sayi1));
					break;
				}
				
			// KOS�NUS BULMA	
			case 14 : 
				{
					printf("kosinus hesaplamak icin bir deger giriniz : ");
					scanf("%d",&sayi1);
					printf("sonuc : %.2f\n",kosinus(sayi1));
					break;
				}
			case 15 :
				{
					menu();
					break;
				}
			// UYGULAMADAN �IKI�
			case 0 :
				{
					printf("Uygulama Kapatiliyor....\n");
					durdurucu = 0;
					break;
				}
				
			// UYGULAM ��LEMLER� HAR�C�NDE B�R ��LEM G�R�L�RSE UYARI MESAJI
			default:
				{
					printf("islem gecersiz\n");
					break;
				}
			
		}
		menu_counter = 1;
	
	}while(durdurucu);

}

//////////////////////////////////////////// FONKS�YON OLU�TURMA KISMI ///////////////////////////////////////

// KOS�NUS FONKS�YONU
float kosinus(int sayi1)  // sonu� float de�er ��kabilece�i d���n�lerek bu �ekilde tan�mland�
{

	float sayi = (PI/180)*sayi1;	
	return cos(sayi);
	
}

// S�NUS FONKS�YONU
float sinus(int sayi1)   // sonu� float de�er ��kabilece�i d���n�lerek bu �ekilde tan�mland�
{
	
	float sayi = (PI/180)*sayi1;	
	return sin(sayi);
}

// TANJANT FONKS�YONU
float tanjant(int sayi1) // sonu� float de�er ��kabilece�i d���n�lerek bu �ekilde tan�mland�
{
	
	float sayi = (PI/180)*sayi1;
	return tan(sayi);
}

// �OKLU TOPLAMA FONKS�YONU
int coklu_carpma(int tur) // tur de�i�keni tur say�s�n� yani kullan�c�n�n ka� veri ile i�lem yapt���n� belirtir 
{
	
	int sayi1;
	
	int result = 1;
	
	for (int i = 0;i<tur;i++){
		printf("%d. sayi : ",i+1);
		scanf("%d",&sayi1);
		result = result * sayi1;
	}
	
	return result;
}

// �OKLU �ARPMA FONKS�YONU
int coklu_toplama(int tur)
{
	
	int sayi;
	int result = 0;
	
	for (int i = 0;i<tur;i++){
		printf("%d. sayi : ",i+1);
		scanf("%d",&sayi);
		result = result + sayi;
	}
	return result;
}

// �S ALMA FONKS�YONU
float usAlma(int taban,int us){
	
	if (us < 0)    // us negatif ise sonu� 1/x �eklinde olmal�
		{
			float result = 1;
			us = -1 * us;        // us de�erei pozitif yap�ld�
			for(int i = 1;i<=us;i++)
			{
				result = result * taban;
			}
			return 1/result;	// us de�eri negatif oldu�u i�in 1/x �eklinde bir ��kt� d�nd�r�lmesi sa�land�
		}
	
	else if(us == 0)   // us s�f�ra e�it ise sonu� "1" olmal�
		{
			return 1;	
		}
	
	else      // us de�eri pozitif ise normal i�lem yap�l�r
		{
			float result = 1;
		
			for(int i = 1;i<=us;i++)
				{
					result = result * taban;
				}
	
			return result;	
		}
	
	
}

// KALAN BULMA FONKS�YONU
int kalan(int sayi1,int sayi2){ 
	
	return sayi1%sayi2;
}

// TOPLAMA FONKS�YONU
int topla(int sayi1,int sayi2){
	
	return sayi1+sayi2;
}

// �IKARMA FONKS�YONU
int cikarma(int sayi1,int sayi2){
	return sayi1-sayi2;
}

// B�LME FONKS�YONU
int bol(int sayi1,int sayi2)
{
			return sayi1/sayi2;
		
}

// �ARPMA FONKS�YONU
int carpma(int sayi1,int sayi2){
	return sayi1*sayi2;
}

// MUTLAK DE�ER HESAPLAMA FONKS�YONU
int mutlakDeger(int sayi1){
	if (sayi1<0)
	{
		sayi1 = -1 * sayi1;
		return sayi1;
	}
	else
	{
		return sayi1;
	}
}

// MAKS�MUM DE�ER BULMA FONKS�YONU
int maksimum(int sayi1,int sayi2){
	if(sayi1-sayi2 < 0)
	{
		return sayi2;
	}
	else
	{
		return sayi1;
	}
}

// M�N�MUM DE�ER BULMA FONKS�YONU
int minimum(int sayi1,int sayi2){
	if(sayi1-sayi2 < 0)
		{
			return sayi1;
		}
	else
		{
			return sayi2;
		}
}


// MEN� DAHA G�ZEL G�Z�KMES� ���N G�RSELLE�T�R�LD�
void menu(){
	
	printf("      __        0 - Cikis\n");
	printf("     |  |        1 - Toplama islemi\n");
	printf(" ____|  |____     2 - Cikarma islemi\n");
	printf("|____    ____|     3 - Carpma islemi\n");
	printf("     |  |           4 - Bolme islemi\n");
	printf("     |__|            5 - Mutlak deger hesabi\n");
	printf("                      6 - Maksimum deger bulma\n");
	printf("- HESAP MAKINESI -     7 - Minimum deger bulma\n");
	printf("      __              8 - Kalan Bulma\n");
	printf("     |__|            9 - Us alma\n");
	printf(" ____________       10 - Coklu toplama\n");
	printf("|____________|     11 - Coklu carpma\n");
	printf("      __          12 - Tanjant hesabi\n");
	printf("     |__|        13 - Sinus Hesabi\n");
	printf("                14 - Konsinus hesabi\n\n");

}	
