//dört basamaklı sayı yazılacak. 
//ilk iki sayı + son iki sayı, ilk iki sayı - son iki sayı, sakamları toplamı
//toplam
//mutlak fark
//rakamları toplamı

#include <stdio.h>
#include <stdlib.h>
int toplam(int sifre);
int mutlakFark(int sifre);
int rakamlariToplami(int sifre);

int main()
{
    int sifre, kod, kontrol = 0;
    do{
    printf("Dort basamakli bir sayi girin:");
    scanf("%d",&sifre);
    if(sifre < 1000 || sifre >9999){
            kontrol = 1;
    }else{
        kod = ((toplam(sifre) % 100) * 10000) + ((mutlakFark(sifre) * 100)) + rakamlariToplami(sifre);
        printf("Guvenlik kodu: %d",kod);
        break;
    }
    }while(kontrol == 1);
    return 0;
}

int toplam(int sifre){
    int ilk, son, toplam;
    ilk = sifre / 100;
    son = sifre % 100;
    toplam = son + ilk;
    return toplam;
}

int mutlakFark(int sifre){
    int ilk, son, mutlakFark;
    ilk = sifre / 100;
    son = sifre % 100;
    mutlakFark = son - ilk;
    if(mutlakFark<0){
        mutlakFark = mutlakFark * (-1);
    }
    return mutlakFark;
}

int rakamlariToplami(int sifre){
    int a, rakamlariToplami = 0;
    a = sifre;
    while(a>0){
        rakamlariToplami += a % 10;
        a = a / 10;
    }
    return rakamlariToplami;
}
