#include <stdio.h>
#include <stdint.h>

union Veri
{
    uint32_t veri;

    struct 
    {
        unsigned int rezerve:9;
        unsigned int data2:8;
        unsigned int data1:8;
        unsigned int adres:7;

    }bytelar;

};

int main(){
    union Veri veri1;
    veri1.veri = 0xC6C6C600;

    printf("Adres > %d\nData 1 > %d\nData 2 > %d",veri1.bytelar.adres,veri1.bytelar.data1,veri1.bytelar.data2);
 


}
