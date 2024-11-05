#include <stdio.h>
#include <stdint.h>

void changer(uint8_t *dizi, int len);

int main()
{
    uint8_t arrayA[] = {83,
                        41, 66, 1, 23, 10, 39, 99, 46, 78, 3, 51, 8, 96, 13};

    int len= sizeof(arrayA) / sizeof(arrayA[0]);
    
    changer(arrayA, len);
    
    for(int i = 0; i<len;i++){
        printf("arrayA[%d] = %d\n",i,arrayA[i]);
    }    
}

void changer(uint8_t *dizi, int len)
{
    for(int i=0;i<len;i++){
        
        if((*(dizi+i))%2==0){
            *(dizi+i) = 0;
        }
        
    }
    
}
