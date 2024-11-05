#include<stdio.h>
#include<stdint.h>

int main()
{
	int sayi;
	int toplam = 0;
	printf("Sayi girin > ");
	scanf("%d",&sayi);

	for(int i=1;i<=(int)(sayi/2);i++){
	    
	    if (sayi%i==0){
	        toplam = toplam + i;
	    }
	    
	}
	if(sayi==toplam){
	    printf("%d mukemmel sayidir",toplam);
	    
	    }
	 else{
	     printf("%d mukemmel sayi degil",toplam);
	     }
	
}
