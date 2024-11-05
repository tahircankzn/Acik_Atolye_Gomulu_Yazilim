#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

int main()
{
	int fibonacci[100];
	fibonacci[0]=1;
	fibonacci[1]=1;
	
	int input;
	int cnt = 0;
	
	printf("Fibonacci serisinin ilk kac asal sayisini istiyorsunuz > ");
	scanf("%d",&input);
	
	for(int i = 2;i<=99;i++){
	    fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
	    
	    bool asal = true;
	    for(int a=2;a<fibonacci[i];a++){
	        if(fibonacci[i]%a == 0){
	            asal = false;
	            break;
	        }
	        
	    
	    }
	    if(asal){
	        printf("%d ",fibonacci[i]);
	        cnt++;
	    }
	    if(cnt==input){
	        break;
	    }
	    
	}
	
}
