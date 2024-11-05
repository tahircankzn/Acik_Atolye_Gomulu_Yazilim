#include<stdio.h>
#include<string.h>


int main()
{

	char A[6] = {"bursa"};                   
	char B[9] = {"istanbul"};
	int cnt = 0;

    for(int i = 0; i<strlen(A);i++){
        
        for(int a = 0;a<strlen(B);a++){
            
            //printf("%c %c",A[i],B[a]);
            
            if(A[i] == B[a]){
                cnt++;
                printf("%c",A[i]);
            }
            
            
        }
        
    }
      printf("\nortak karakter sayisi > %d",cnt);
      
    

}
