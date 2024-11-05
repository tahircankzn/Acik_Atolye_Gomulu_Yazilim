#include <stdio.h>
#include <stdlib.h>


void chancer(int *p,int sayi){
	*p = 20; // pointerdan dolayý adres ile o adresteki deðeri deðiþtirdi
	sayi = 30; // maindekini deðiþtirmedi
	
}

int main() {
	
	int liste[4] = {1,3,2,5};
	
	int* pt = liste; // int* pt = liste[0]
	
	printf("%d %p \n",liste[0],pt);
	printf("%d %p \n",*pt,pt);
	printf("%p - %p = 4 , int 4 byte\n",pt+1,pt);
	
	chancer(pt,liste[0]);
	
	printf("%d %p \n",liste[0],pt);
	
	
	
	
	
	
	
	return 0;
}
